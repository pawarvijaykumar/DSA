#include<iostream>
using namespace std;
class Hero{

  public:
    int health=35;
    string level="abc";


    void setAge(int a){
      age=a;
    }



//paramiterised constructor
Hero(int health){
  cout<<"this keyword"<<this<<endl;
  this->health=health;
}
//constructor call
 Hero(){//without parameter
  cout<<"the constructor"<<endl;
}
    int getAge()
  {
      return age;
  }


    private:
      int age;
    
  };

  int main(){
  //statically
    Hero ramesh(10);
    cout<<"the parametr is  "<<&ramesh<<endl;




 //dynamically
 Hero*h=new Hero;

   /*ramesh.setAge(20);
   cout<<"the age is \n"<<ramesh.getAge()<<endl;
  cout<<"the ramesh\n"<<ramesh.health<<endl;
  cout<<"the level\n"<<ramesh.level<<endl;*/

  
  return 0;
}