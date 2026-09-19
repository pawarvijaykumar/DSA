#include<iostream>
using namespace std;
int power(int n){
   //base call
  if(n==0){
    return 1;/* if write 1 then 5*4*3*2*1=25 value
    becuse is print upto 1 did not upto 0 we r write when is come 0 then return 1 that is if*/
    //return  0;
  }// if write 0 then 5*4*3*2*1*)=0 value
    
  int lowerValue=power(n-1);
  int largeValue=2*lowerValue;

  return largeValue;
 
}
int sqrt(int n){
  if(n==0){
    return 0;//2⁰ = 1 or 2^n

  }
  //return n+sqrt(n-1)+(n-1);
  return n*n;
}
int main(){
  int ans=power(5);
  cout<<ans<<endl;
  cout<<endl;
  int ans1=sqrt(5);
  cout<<ans1<<endl;
  
  return 0;
}