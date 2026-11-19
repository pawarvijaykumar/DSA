
#include<iostream>
using namespace std;

class Stack {

    // Node structure
    class Node {
    public:
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = NULL;
        }
    };

    Node* top;

public:

    // Constructor
    Stack() {
        top = NULL;
    }

    // Push: Insert element
    void push(int element) {

        Node* newNode = new Node(element);

        newNode->next = top;
        top = newNode;

    }

    // Pop: Delete top element
    void pop() {

        if(top == NULL) {
            cout << "Stack is underflow" << endl;
            return;
        }

        Node* temp = top;

        top = top->next;

        delete temp;
    }

    // Peek: Return top element
    int peek() {

        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }

    // Check empty
    bool isEmpty() {

        return top == NULL;
    }

    // Destructor
    ~Stack() {
        while(top != NULL) {
            pop();
        }
    }
};


int main() {

    Stack st;

    st.push(22);
    st.push(43);
    st.push(55);

    cout << "Top element: " << st.peek() << endl;

    st.pop();

    cout << "After pop: " << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty" << endl;
    }
    else {
        cout << "Stack not Empty" << endl;
    }

    return 0;
}
