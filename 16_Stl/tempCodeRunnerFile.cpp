#include<iostream>
#include<stack>

using namespace std;
 
int main(){
  stack<string>s;
  s.push("vijay");
  s.push("rahul");
  s.push("king");
  
  cout<<"the stack element"<<s.top()<<endl;
  
  return 0;
}