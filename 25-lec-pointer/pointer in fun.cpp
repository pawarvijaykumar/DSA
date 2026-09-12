#include<iostream>
using namespace std;
int change(int x){
  x=100;

}
void changeof(int *x){

  *x=120;
}

void swapNum(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  //return a;
}
int main(){
  
  int a=10;
  //change(a);
  changeof(&a);

  cout<<a<<endl;//10
  cout<<&a<<endl;
  int x=10;
  int y=20;
  swapNum(&x,&y);
  cout<<x<<" "<<y<<endl;



  return 0;
}