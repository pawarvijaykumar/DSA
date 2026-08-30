#include<iostream>
#include<queue>

using namespace std;
 //The element that enters first is removed first.
int main(){
  queue<string>q;
  q.push("king");//means last element will come
  q.push("vijay");
  q.push("rahul");
  
  cout<<"the stack element \n"<<q.front()<<endl;//is came king 
  //cout<<"the stack element \n"<<s.bottom()
  //after i pop 
 q.pop();

  cout<<"the stack element \n"<<q.front()<<endl;//is came rahul 
   cout<<"after size element \n"<<q.size()<<endl;
  
  return 0;
}