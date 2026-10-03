
#include<iostream>
using namespace std;


class Hero
{
public:
    Hero()
    {
        cout << "Constructor called" << endl;
    }
    //Parameterized constructor
     Hero(int h)
    {
        cout << "Health: " << h << endl;
    }
};
int main(){
  Hero ramesh;
  Hero(10);
  return 0;
}