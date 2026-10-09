#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node*next;

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
  
};
int main(){
  Node*s1=new Node(10);
 // Node*s1=new1 Node(20)
  cout<<"the node is "<<s1->data<<endl;
  cout<<s1->next<<endl;
  
  return 0;
}