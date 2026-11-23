#include<iostream>
#include<stack>

using namespace std;
void solve (stack<int>&s,int x){
  //base case 
  if(s.empty()){
    s.push(x);
    return;


  }
  int num=s.top();
  s.pop();


  solve(s,x);
  s.push(num);

}
stack<int>pushAtBottom(stack<int>&myStack,int x){
  solve(myStack,x);
  return myStack;
}
int main() {

    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    int x =50;

    pushAtBottom(myStack, x);

    // Print stack
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}