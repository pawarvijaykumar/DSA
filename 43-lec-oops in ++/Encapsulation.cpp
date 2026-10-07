#include<iostream>
using namespace std;
class student{
  private:
    string name;
    int age;
    int height;

    public:

//Encapsulation means wrapping data and the functions that operate on that data inside a class, and controlling access to that data.
    void setHeight(int h){
      height=h;
    }
     int getAge(){
      return this->age;
     
     }
};

int main(){
  student first;

  first.setHeight(7);
  cout<<"the height is "<< first.getAge()<<endl;
  cout<<"they are all is okay"<<endl;
  
  return 0;
}