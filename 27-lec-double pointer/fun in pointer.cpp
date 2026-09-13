#include<iostream>
using namespace std;
void update(int **p2){
  **p2=**p2+1;
}
int main(){
  int i=5;
  int *p=&i;
  int **p2=&p;
  cout<<i<<endl;
  cout<<p<<endl;
  cout<<p2<<endl;
  cout<<endl;
  //after
  update(p2);
  cout<<i<<endl;
  cout<<p<<endl;//5+1=6
  cout<<p2<<endl;



  
  return 0;
}