#include<iostream>
using namespace std;
bool isEven(int n ){
  
  if(n%2==0){
    //cout<<"even";
    return 0;
  }else{
    //cout<<"odd";
    return 1;

  }

}

  
int main(){
  int num;
  cin>>num;
  if(isEven(num)){
    cout<<"even";

  }else{
    cout<<"odd";
  }
  return 0;
}