#include<iostream>
using namespace std;
class Hero{

  public:
    int health=35;
    string level="abc";

};
int main(){
  Hero ramesh;
  cout<<"the ramesh\n"<<ramesh.health<<endl;
  cout<<"the level\n"<<ramesh.level<<endl;

  
  return 0;
}