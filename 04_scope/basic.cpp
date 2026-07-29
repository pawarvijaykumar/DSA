#include<iostream>
using namespace std;
  int main(){
  //int a;//garbage
  int a=4;
  cout<<a<<endl;
  if(true){//in one scope canot run same data variable
    int a=5;
    cout<<a<<endl;
    int c=6;
    cout<<c<<endl;

    int i;
    for(int i=0;i<=8;i++){
      cout<<"king"<<endl;
    }
      if(true){
        int b=56;
        if(true){
          if(true){
            cout<<b<<endl;
          }
        }

      }
    }
  }
 