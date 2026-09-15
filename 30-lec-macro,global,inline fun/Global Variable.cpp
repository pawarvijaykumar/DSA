#include<iostream>
using namespace std;
int score =23;//itsglobal variable becuse outside the function then calld as global function becuase its declare outside
 void a(int& x){
  cout<<x<<endl;
  cout<<"x in<<"<<score<<endl;
 }
 void b(int& y){
  cout<<y<<endl;
  cout<<"y in"<<score<<endl;
 }
int main(){
  int x;
  int y;
  int i=7;
  cout<<score<<endl;
  {  // {
    int h=8;
    cout<<h<<endl;//is local variable
  }
  a(x);
  b(y);

  return 0;
}