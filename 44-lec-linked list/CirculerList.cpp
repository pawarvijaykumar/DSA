#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;

  //constructor
  Node(int d){
    this->data=d;
    this->next=NULL;
  }
  //distructor
  ~Node(){
  int value=this->data;
  if(this->next!=NULL){
    delete next;
    next=NULL;

  }
  cout<<"memory is free for node with data"<<value<<endl;

}
};
void insertNode(Node* &tail,int element,int d){
  //empty list
  if(tail==NULL){
    Node*newNode=new Node(d);
    tail=newNode;
    newNode->next=newNode;
  }else{
    //none -empty list
    //asuming that the elemenrt is present in the list
  Node*curr=tail;

  while(curr->data !=element){
    curr=curr->next;


  }
  //lement found 
  Node*temp=new Node(d);
  temp->next=curr->next;
  curr->next=temp;




  }
}
void print(Node*tail){
  Node*temp=tail;
  //empty list
  if(tail==NULL){
    cout<<"loist is Empty"<<endl;
    return;
  }
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }while(tail!=temp);
  cout<<endl;
  }

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}
int main(){
  Node*tail=NULL;
  insertNode(tail,5,3);
  print(tail);
  
   insertNode(tail,3,6);
  print(tail);
  

   insertNode(tail,6,7);
  print(tail);
  

   insertNode(tail,7,8);
  print(tail);
  
   insertNode(tail,8,9);
  print(tail);
  
   insertNode(tail,9,10);
  print(tail);
  
  
   insertNode(tail,10,11);
  print(tail);

   deleteNode(tail, 10);
    print(tail);
  
  return 0;
}