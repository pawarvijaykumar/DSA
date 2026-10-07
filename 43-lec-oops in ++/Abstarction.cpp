#include<iostream>
using namespace std;

 class Car
{
public:

  void start()
  {
        // complicated engine process
        cout << "Car started" << endl;
  }
};
int main(){
  Car c;

  c.start();
  
  return 0;
}