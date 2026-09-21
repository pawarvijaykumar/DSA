#include<iostream>
using namespace std;


int power(int a,int b){
  if(b==0){
    return 1;
  }
   if(b==1){
    return a;
  }
  int ans=power(a,b/2);//3,11

  if(b%2==0){
    return a*ans;

  }else{
    return a*ans* ans;

  }
}
int main(){
  int a,b;
  cout<<"enter the a"<<" "<<"enter the b"<<endl;
  cin>>a>>b;
  int index=power(a,b);
  cout<<index<<endl;
  
  return 0;
}