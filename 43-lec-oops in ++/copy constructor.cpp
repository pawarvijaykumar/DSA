#include<iostream>
using namespace std;


class Hero{
  public:
  int health;
  Hero(int h){
    health=h;
  }
  //copy constructor
  Hero(const Hero &obj){//This means the constructor receives another Hero object by reference
    health=obj.health;
  }

};

int main(){
  Hero h1(100);
 
  Hero h2(h1);   // Copy constructor

  cout<<h1.health<<endl;
  cout<<h2.health<<endl;
 


  
  return 0;
}