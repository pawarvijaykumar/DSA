#include<iostream>
#include<stack>

using namespace std;
 // The element that you insert last is the element that comes out first.
 
int main(){
  stack<string>s;
  s.push("vijay");
  s.push("rahul");
  s.push("king");//means last element will come
  
  cout<<"the stack element \n"<<s.top()<<endl;//is came king 
  //cout<<"the stack element \n"<<s.bottom()
  //after i pop 
  s.pop();

  cout<<"the stack element \n"<<s.top()<<endl;//is came rahul 
   cout<<"after size element \n"<<s.size()<<endl;
  
  return 0;
}