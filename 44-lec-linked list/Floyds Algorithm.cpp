
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter node values: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int pos;
    cout << "Enter position to connect last node (0 for no loop): ";
    cin >> pos;

    if (pos > 0 && pos <= n) {
        Node* temp = head;

        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }

        tail->next = temp;
    }

    if (detectLoop(head)) {
        cout << "Loop detected!" << endl;
    } else {
        cout << "No loop detected!" << endl;
    }

    return 0;
}
/* if not detecteed loop then like that
Enter node values: 1 2 3 4 5 6 7  
Enter position to connect last node (0 for no loop): 8
No loop detected!

if it is not detected then will shown like that
Enter node values: 1 2 3 4 5 6 7    
Enter position to connect last node (0 for no loop): 3
Loop detected!
 
*/