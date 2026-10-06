#include<iostream>
using namespace std;
class A{
  
  public:
  int x=10;
  void fun(){

    cout<<"the i am A"<<endl;

  }
};

class B{
  public:
  int x=20;
  void fun(){
    cout<<"the i am B"<<endl;

  }
};
class C:public A,public B{

};

int main(){
  C s1;
  //s1.fun(); //get erro becuase is comfusing it think who class call me class A or B then will get error then solution :: scope resulation operator 

  //variable call
  cout<<s1.A::x<<endl;

  cout<<s1.B::x<<endl;
  s1.A::fun();
  s1.B::fun();
  
  return 0;
}