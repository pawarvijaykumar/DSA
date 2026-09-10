/*
x       → value
&x      → address
p       → address
*p      → value at that address


Changing a variable using a pointer
int x = 10;

int *p = &x;

*p = 50;

cout << x;

Pointer arithmetic

int arr[3] = {10, 20, 30};

int *p = arr;

cout << *p << endl;

p++;

cout << *p << endl;

p++;

cout << *p << endl;

*/

#include<iostream>
using namespace std;
void change(int *p) {
    *p = 100;
}



int main() {

  int x = 10;
  
  change(&x);
  
  cout << x<<endl;





  int num=5;
  int *p=&num;
  cout<<p<<endl;//0x61ff04

  cout<<*p<<endl;//5

  int *q=0;
  q=&num;
 cout<<q<<endl;//0x61ff04

  cout<<*q<<endl;//5

  double d=4.6;
  double *p2=&d;

  cout<<p2<<endl;
  cout<<*p2<<endl;
  cout<<*p2*2<<endl;

  cout<<"the size of integer"<<sizeof(p)<<endl;
  cout<<"the size of pointer"<<sizeof(p2)<<endl;
  cout<<"the size of pointer"<<sizeof(num)<<endl;

  //main concept
  int i=3;
  int *f=&i;
  *f=*f+1;
  cout<<*f<<endl;//4
  f=f+1;
  cout<<*f<<endl;
}
 
//Pointer to pointer

// int x = 10;

// int *p = &x;

// int **q = &p;


// cout << x;    // 10
// cout << *p;   // 10
// cout << **q;  // 10