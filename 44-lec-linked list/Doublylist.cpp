#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*prev;
  Node*next;

  //constructor
  Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;

  }
};
//travesal
void print(Node*head){
  Node*temp=head;

  while(temp !=NULL){
    cout<<temp->data<<" ";//jab tak null nayi aata hai tab tak dat print  kar te jao
    temp=temp->next;
  }
  cout<<endl;
};

//length of the linked list
int getLength(Node*head){
  int len=0;
   Node*temp=head;

  while(temp !=NULL){
   
    len++;
    temp=temp->next;
  }
  return len;
}//insert the fisrt values
void insertAtHead(Node*&head,int d){
  Node*temp=new Node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
//insert the end values
void insertAttail(Node*&tail,int d){
  Node*temp=new Node(d);
  tail->next=temp;
  temp->prev=tail;
  tail=temp;
}

int main(){
  Node* node1 = new Node(10);
  
  Node*head=node1;
  Node*tail=node1;

  print(head);
  cout<<getLength(head)<<endl;

  insertAtHead(head,12);
  print(head);
  
insertAtHead(head,15);
  print(head);
  
insertAtHead(head,19);
  print(head);
  

insertAttail(tail,34);
print(head);


insertAttail(tail,14);
print(head);



insertAttail(tail,89);
print(head);


  return 0;
}