#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value"<<endl;
  cin>>n;
  
  bool prime =true;
  if(n<=1){
    //cout<<"enter the value"<<endl;
    prime=false;
  }
  for(int i=3;i<n;i++){
    if(n%i==0){
      prime=false;
      

    }
  }
  if(prime){
    cout<<"prime";
  }
  else{
    cout<<"not prime";
    
  }
}
