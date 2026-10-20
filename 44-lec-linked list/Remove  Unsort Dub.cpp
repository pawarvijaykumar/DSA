
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

    // Remove duplicates from an unsorted list
    ListNode* removeDuplicatesUnsorted(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* prev = curr;
            ListNode* temp = curr->next;

            while (temp != nullptr) {
                if (temp->val == curr->val) {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                } else {
                    prev = temp;
                    temp = temp->next;
                }
            }

            curr = curr->next;
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
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(5);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(2);

    cout << "Original list: ";
    printList(head);

    Solution s;
    head = s.removeDuplicatesUnsorted(head);

    cout << "After removing duplicates: ";
    printList(head);

    return 0;
}
