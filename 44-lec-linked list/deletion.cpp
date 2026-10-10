#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Delete first node
void deleteFirst(Node*& head) {
    if (head == NULL) {
        return;
    }

    Node* temp = head;
    head = head->next;//moves the head to the second node.
    delete temp;
}

// Delete node at a given position (1-based)
void deleteMiddle(Node*& head, int position) {
    if (head == NULL || position < 1) {
        return;
    }

    if (position == 1) {
        deleteFirst(head);
        return;
    }

    Node* temp = head;

    // Move to the node before the target
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// Delete last node
void deleteLast(Node*& head) {
    if (head == NULL) {
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original list: ";
    printList(head);

    deleteFirst(head);
    cout << "After deleting first: ";
    printList(head);

    deleteMiddle(head, 2);
    cout << "After deleting position 2: ";
    printList(head);

    deleteLast(head);
    cout << "After deleting last: ";
    printList(head);

    return 0;
}