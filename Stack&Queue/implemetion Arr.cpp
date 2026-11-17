#include<iostream>
#include<stack>

using namespace std;
class Stack{
  //properties
  public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
      this->size=size;
      arr=new int[size];
      top=-1;
    }

    //insert the element
    void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout<<"the stack is overflow"<<endl;

      }

    }
    void pop(){
      if(top>=0){
        top--;
      
      }
      cout<<"stack is underflow"<<endl;
    }
     int  peek(){
      if(top>=0){
        return arr[top];
      }
      else{
        cout<<"stack is empty"<<endl;
        return -1;

      }
    }
    bool isEmpty(){
      if(top==-1){
        return true;

      }
      else{
        return false;
      }
    }



    

};



int main(){

  //object
  Stack st(3);
  st.push(22);
  st.push(43);
   


  st.pop();
   //st.pop();
    //st.pop();


  cout<<"the top element"<<st.peek()<<endl;

  if(st.isEmpty()){
    cout<<"Stack is Empty"<<endl;

  }
  else{
    cout<<"Stack not Empty"<<endl;
  }



  
  return 0;
}