#include<iostream>
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
void insertAtBeginning(Node*& head,int value){
  Node*newNode=new Node(value);
  newNode->next=head;
  head=newNode;
}
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
//last node
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}



// Insert a new node after a given node
//and alsp first position
void insertAfter(Node* prev, int value) {
    if (prev == NULL) {
        return;
    }

    Node* newNode = new Node(value);

    newNode->next = prev->next;
    prev->next = newNode;
}

// Print the linked list
void printList1(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
  Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);
    

    insertAtBeginning(head1,8);
    printList(head1);

    cout<<endl;
  //last node
  
  Node* head2 = new Node(2);
    head2->next = new Node(3);
    head2->next->next = new Node(4);

    insertAtEnd(head2, 5);

    printList(head2);


//middle insert

cout<<endl;

//middle insert 
// Create the linked list
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(7);
    head->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next = new Node(9);

    // Find node containing 4
    Node* temp = head;

    while (temp != NULL && temp->data != 4) {
        temp = temp->next;
    }

    // Insert 5 after node 4
    if (temp != NULL) {
        insertAfter(temp, 5);
    }

    // Print the updated linked list
    printList1(head);

  
  
  return 0;
}




