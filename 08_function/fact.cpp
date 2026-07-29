#include<iostream>
using namespace std;
int factorial(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*i;

  }
  return ans;
//in the void fn u should not write a return value 
//becuse-->This function will NOT send any value back
}
int nCr(int n,int r){


  int num=factorial(n);
  int demon=factorial(r)*factorial(n-r);
  return num/demon;

  }

int main(){
  int n,r;
  cin>>n>>r;
  cout<<"the answer"<<nCr(n,r)<<endl;
  
  return 0;
}