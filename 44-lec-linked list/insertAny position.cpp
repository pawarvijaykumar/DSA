
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtPosition(Node*& head, int value, int position) {
    if (position < 1) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(value);

    // Case 1: Insert at the beginning
    if (position == 1) {
        newNode->next = head;

        if (head != NULL) {
            head->prev = newNode;
        }

        head = newNode;
        return;
    }

    // Find the node before the desired position
    Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Position is out of range
    if (temp == NULL) {
        delete newNode;
        cout << "Invalid position\n";
        return;
    }

    // Connect new node to the next node
    newNode->next = temp->next;
    newNode->prev = temp;

    // Update the next node's previous pointer
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    // Connect previous node to new node
    temp->next = newNode;
}

void printForward(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
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

    cout << "Original list: ";
    printForward(head);

    insertAtPosition(head, 25, 3);

    cout << "After insertion: ";
    printForward(head);

    return 0;
}
