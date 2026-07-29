#include<iostream>
using namespace std;
void prime(int n){
  //int n;
  int i=1;
  for(int i=2;i<n;i++){
    if(n%i==0){
      cout<<"this primenumber"<<endl;

    }else{
      cout<<"this no primenumber"<<endl;;
    }
  }
  cout<<endl;
  
}
int main(){
  int n;
  cin>>n;
  prime(n);
  return 0;
}