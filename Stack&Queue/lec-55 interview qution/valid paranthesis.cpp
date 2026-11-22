
#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthiesis(string expression) {

    stack<char> s;

    for(int i = 0; i < expression.length(); i++) {

        char ch = expression[i];

        // Opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        else {
            // Check if stack is empty
            if(!s.empty()) {

                char top = s.top();

                // Match opening and closing brackets
                if((ch == ')' && top == '(') ||
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '[')) {

                    s.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }

    // Check stack after completing the loop
  if(s.empty())
    return true;
  else
    return false;
  
   
}

int main() {

    string expression = "{[()]}";

    if(isValidParenthiesis(expression)) {
        cout << "Valid Parentheses" << endl;
    }
    else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}
