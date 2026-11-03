#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == NULL) return NULL;

        unordered_map<Node*, Node*> mp;

        Node* curr = head;

        // Step 1: Create cloned nodes
        while (curr != NULL) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Step 2: Connect next and random
        curr = head;

        while (curr != NULL) {
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];

            curr = curr->next;
        }

        return mp[head];
    }
};

// Print linked list
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << "Value: " << temp->val;

        if (temp->random != NULL)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";

        cout << endl;

        temp = temp->next;
    }
}

int main() {

    // Create original linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Assign random pointers
    head->random = head->next->next;       // 1 → 3
    head->next->random = head;             // 2 → 1
    head->next->next->random = head->next; // 3 → 2

    cout << "Original Linked List:" << endl;
    printList(head);

    // Clone linked list
    Solution obj;
    Node* clonedHead = obj.copyRandomList(head);

    cout << "\nCloned Linked List:" << endl;
    printList(clonedHead);

    return 0;
}