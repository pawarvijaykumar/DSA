#include<iostream>
using namespace std;
class Hero{
  public:
  static int vijay;
  static int random(){
    cout<<vijay<<endl;
  }
//main important is a statics is a acces only for its not other value 
};
int Hero::vijay=8;
int main(){
  cout<<"the static \n "<<Hero::vijay<<endl;
  
  return 0;
}