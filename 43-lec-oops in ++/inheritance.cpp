#include <iostream>
#include <string>
using namespace std;

//base class 
class Human{
  protected:
  int weight; 
  int health;
  int age;
    public:
    int getAge(){
      return this->age;

    }
    void setAge(int a){
      this->age=a;
    }

    void setWeight(int w){
       this->weight=w;

     
    }
    int  getWeight(){
      return this->weight;
    }


};
//superfast class
 class Male:public Human{
  public:
  string color;
  void sleep(){
    cout<<"male sleeping"<<endl;

  }
  int getWeight(){
    return this->weight;
  }


};

int main(){
  Male s1;
  cout<<s1.getWeight()<<endl;

  // s1.color="green";
  // s1.setAge(29);
  // s1.setWeight(30);
  // cout<<s1.color<<endl;

  // cout<<s1.getAge()<<endl;
  // cout<<s1.getWeight()<<endl;
  // s1.sleep();

  return 0;
}