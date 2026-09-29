#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:

    void insertAtBottom(stack<int>& st, int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }

        int top = st.top();
        st.pop();

        insertAtBottom(st, x);

        st.push(top);
    }

    void reverseStack(stack<int>& st)
    {
        if(st.empty())
            return;

        int x = st.top();
        st.pop();

        reverseStack(st);

        insertAtBottom(st, x);
    }
};

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    Solution sol;

    sol.reverseStack(st);

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}