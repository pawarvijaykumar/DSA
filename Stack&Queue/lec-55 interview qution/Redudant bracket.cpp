
#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s) {

    stack<char> st;

    for(int i = 0; i < s.length(); i++) {

        char ch = s[i];

        // Closing bracket
        if(ch == ')') {

            bool isRedundant = true;

            while(!st.empty() && st.top() != '(') {

                char top = st.top();

                if(top == '+' || top == '-' ||
                   top == '*' || top == '/') {

                    isRedundant = false;
                }

                st.pop();
            }

            // Remove opening bracket
            if(!st.empty()) {
                st.pop();
            }

            if(isRedundant) {
                return true;
            }
        }
        else {
            st.push(ch);
        }
    }

    return false;
}

int main() {

    string expression = "((a+b))";

    if(findRedundantBrackets(expression)) {
        cout << "Redundant Brackets Found";
    }
    else {
        cout << "No Redundant Brackets";
    }

    return 0;
}
