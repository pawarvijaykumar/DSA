
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k <= 1) {
            return head;
        }

        // Step 1: Check whether k nodes are available
        ListNode* temp = head;

        for (int i = 0; i < k; i++) {
            if (temp == NULL) {
                return head;
            }
            temp = temp->next;
        }

        // Step 2: Reverse k nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;

        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Reverse remaining groups recursively
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // Step 4: Return new head
        return prev;
    }
};

// Print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 3;

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
