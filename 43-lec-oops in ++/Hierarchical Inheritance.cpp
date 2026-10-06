#include<iostream>
using namespace std;
/*
One parent → multiple children

           A
          / \
          ↓  ↓
          B  V
*/

class A{
  public:
   void fun1(){
    cout<<"the viajy1"<<endl;
   }
};
 class B:public A{
  public:
  void fun2(){
  cout<<"the vijay2"<<endl;

  }

 };
 class C:public A{
  public:
  void fun3(){
  cout<<"the vijay3"<<endl;

  }

 };
int main(){
  A s1;
  s1.fun1();
  cout<<endl;
  B s2;
  s2.fun1();
  s2.fun2();
cout<<endl;
  C s3;
  cout<<endl;


  s3.fun1();
  s3.fun3();




  
  return 0;
}