#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
  int *arr;
  int top1;int  top2;
  int size;
  public:
  //initialize stack;
  //constructor
  TwoStack(int s){
    this->size=s;
    top1=-1;
    top2=s;
    arr=new int[s];
    
  }

  void push1(int num){
    if(top2-top1>1){
      top1++;
      arr[top1]=num;

    }
  }


  void push2(int num){
    if(top2-top1>1){
      top1--;
      arr[top2]=num;

    }
  }

  //pop from stack 1 and treturn popped lement

  int pop1(){
    if(top2<size){
      int ans=arr[top1];
      top1--;
      return ans;

    }
    else{
      return -1;
    }
  }
  
 //pop from stack 2 and treturn popped lement

  int pop2(){
    if(top2<size){
      int ans=arr[top1];
      top1--;
      return ans;

    }
    else{
      return -1;
    }
  }
   int  peek1(){
      if(top1>=0){
        return arr[top1];
      }
      else{
        cout<<"stack is empty"<<endl;
        return -1;

      }
    }
     int  peek2(){
      if(top2>=0){
        return arr[top2];
      }
      else{
        cout<<"stack is empty"<<endl;
        return -1;

      }
    }
};
int main(){
  TwoStack st1(3);
  TwoStack st2(4);


  st1.push1(23);
  st1.push1(236);


  cout<<"the stack1 "<<st1.peek1()<<endl;

  st2.push2(34);
  st2.push2(343);
  cout<<"the stack2 "<<st2.peek2()<<endl;

  

  
  return 0;
}