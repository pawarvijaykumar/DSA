/*
Pass by value means:
When we send a variable to a function, the function gets a copy of that variable, not the original one.

So if we change the value inside the function, the original variable will not change.
*/

#include<iostream>
using namespace std;
void change(int x,int y){
  x=24;
  y=38;
  cout<<"the inside a function\n"<<x<<endl;
  cout<<"the outside function is\n"<<y<<endl;


}
int main(){
  
  int a;
  int b;
  a=25;
  change(a,b);
  cout<<"the outside function is\n"<<a<<endl;
  ///cout<<"the outside function is\n"<<b<<endl;


  return 0;
}

void update(int b){
  
  b=5;
  cout<<"/"<<b<<endl;

  //return a;
}
int main(){
  int a;
  int b;
  a=15;
  update(b);
  cout<<"the value is\n"<<b<<endl;
}