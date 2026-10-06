#include<iostream>
using namespace std;
 class Animal{

  public:
  int age;
  int weight;

  public:
  void speak(){
    cout<<"it canot speaking"<<endl;
  }


 };
 class Dog:public Animal{

 
 public:
 void sleep(){
  cout<<"it canot sleep"<<endl;


 }
 };
 class maleDog:public Dog{
  public:
  void study(){

    cout<<"it canot study"<<endl; 
  }
};

int main(){
  maleDog d1;
  d1.sleep();
  d1.speak();
  d1.study();

cout<<d1.age<<endl;
  
  return 0;
}