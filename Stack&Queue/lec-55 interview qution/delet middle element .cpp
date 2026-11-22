#include<iostream>
#include<stack>

using namespace std;
//new stack
void solve (stack<int>&inputStack,int count ,int size){
  //bas case using a recursion
  if(count ==size/2){
    inputStack.pop();
    return;

  }//side me raka jo elemnt temperr ke liye delet kar diya
  int num=inputStack.top();
  inputStack.pop();

  solve(inputStack,count+1,size);


  //bad me bacha jo element ko add kardo 

  inputStack.push(num);
}
  void deleteMiddle(stack<int>&inputStack,int N){
    int count =0;
    solve(inputStack,count,N);
  }


int main(){
   stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
   

    deleteMiddle(s, s.size());

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

  
  return 0;
}