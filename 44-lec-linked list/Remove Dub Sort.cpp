
#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* nodeToDelete = curr->next;
                curr->next = curr->next->next;
                delete nodeToDelete;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    cout << "Original list: ";
    printList(head);

    Solution s;
    head = s.deleteDuplicates(head);

    cout << "After removing duplicates: ";
    printList(head);

    return 0;
}
