#include<iostream>
using namespace std;
int factorial(int n){
   //base call
  if(n==0){
    return 1;/* if write 1 then 5*4*3*2*1=25 value
    becuse is print upto 1 did not upto 0 we r write when is come 0 then return 1 that is if*/
    return  0;
  }// if write 0 then 5*4*3*2*1*)=0 value
    
  int lowerValue=factorial(n-1);
  int largeValue=n*lowerValue;

  return largeValue;
 
}
int main(){
  int ans=factorial(4);
  cout<<ans<<endl;
  
  return 0;
}