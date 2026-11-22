
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int element) {

    // Base case
    if(s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int>& s) {

    // Base case
    if(s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    reverseStack(s);

    // Insert at bottom
    insertAtBottom(s, num);
}

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    reverseStack(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
