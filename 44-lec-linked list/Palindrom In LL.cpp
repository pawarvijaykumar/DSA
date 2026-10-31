

/*
Approach – Three steps
We solve this problem using three techniques:
1. Find the middle node.
2. Reverse the second half.
3. Compare both halves.
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
private:

    // Find middle node
    Node* getMid(Node* head) {
        Node* slow = head;
        Node* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    // Reverse linked list
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

public:

    // Check palindrome
    bool isPalindrome(Node* head) {

        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Step 1: Find middle
        Node* middle = getMid(head);

        // Step 2: Reverse second half
        Node* temp = middle->next;
        middle->next = reverse(temp);

        // Step 3: Compare both halves
        Node* head1 = head;
        Node* head2 = middle->next;

        while (head2 != NULL) {
            if (head1->data != head2->data) {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }

        // Step 4: Restore original list
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};

// Main function
int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    Solution obj;

    if (obj.isPalindrome(head)) {
        cout << "Linked List is Palindrome";
    }
    else {
        cout << "Linked List is Not Palindrome";
    }

    return 0;
}
