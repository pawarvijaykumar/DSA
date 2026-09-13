#include<iostream>
using namespace std;
int main(){
  int i=5;
  int *p=&i;
  int **q=&p;

  cout<<i<<endl;
  cout<<*p<<endl;
  cout<<**q<<endl;
  return 0;
}