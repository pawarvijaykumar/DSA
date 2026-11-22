#include<iostream>
#include<stack>
using namespace std;



void sortedInsert(stack<int>&s,int x){
  //base case
  if(s.empty()|| !s.empty() && s.top()<x){
    s.push(x);
    return;
  }
    int num=s.top();
    s.pop();
  

    //recursive call
    sortedInsert(s,x);

    s.push(num);
  
}
  void sortStack(stack<int> &stack){
    //base case


    if(stack.empty()){
      return;
    }
    int num=stack.top();
    stack.pop();


    //recusrion call
    sortStack(stack);


    sortedInsert(stack,num);
  }
int main() {

    stack<int> s;

    s.push(20);
    s.push(40);
    s.push(10);
    s.push(30);

    sortStack(s);

    // Print sorted stack
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}