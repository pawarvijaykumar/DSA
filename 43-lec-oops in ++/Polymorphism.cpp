#include<iostream>
using namespace std;
class A{
  public:
  
  void sayHello(){
    cout<<"the king"<<endl;
  }
  //function overloading
  void sayHello(int n){
    cout<<"the king"<<endl;
  }

  int  sayHello(int n,char name){
    cout<<"the king"<<endl;
    return name;
  }




};
//run time polymerphisem

class Animal{
  void spaek(){
    cout<<"sleeping"<<endl;
  }
};
class Dog:public Animal{
  public:
  void speak(){
    cout<<"the barking"<<endl;
  }

};

int main(){

  //run time
  Dog s1;
  s1.speak();
  // A s1;
  // s1.sayHello();
  
  return 0;
}