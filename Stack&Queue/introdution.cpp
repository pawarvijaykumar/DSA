#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int>s;

  s.push(3);
  s.push(4);
  s.push(6);


  s.pop();
  cout<<"the stack is "<<s.top()<<endl;
  if(s.empty()){
    cout<<"the satck is not empty"<<endl;

  }
  else{
    cout<<"the satck is not empty"<<endl;

  }
  //count the size of stack
  cout<<"the of the stack is "<<s.size()<<endl;

  return 0;
}