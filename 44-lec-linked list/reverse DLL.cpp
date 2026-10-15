
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class Solution {
public:
    Node* reverseDLL(Node* head) {
        Node* curr = head;
        Node* temp = nullptr;

        while (curr != nullptr) {
            // Swap the prev and next pointers
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            // Move to the next node in the original list
            curr = curr->prev;
        }

        // The old last node becomes the new head
        if (temp != nullptr) {
            head = temp->prev;
        }

        return head;
    }
};

void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    cout << "Original DLL: ";
    printList(head);

    Solution sol;
    head = sol.reverseDLL(head);

    cout << "Reversed DLL: ";
    printList(head);

    return 0;
}
