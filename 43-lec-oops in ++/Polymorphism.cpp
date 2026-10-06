#include<iostream>
using namespace std;
class A{
  public:
  void sayHello(){
    cout<<"the king"<<endl;
  }
  void sayHello(int n){
    cout<<"the king"<<endl;
  }

  int  sayHello(int n,char name){
    cout<<"the king"<<endl;
    return name;
  }
};
int main(){
  A s1;
  s1.sayHello();
  
  return 0;
}