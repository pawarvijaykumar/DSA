#include<iostream>
using namespace std;
int factorial(int n){
   //base call
  if(n==0){
    return  0;// agar 0 aagaya toh true kardo 
  }
  int lowerValue=factorial(n-1);
  int largeValue=n*lowerValue;

  return largeValue;
 
}
int main(){
  int ans=factorial(4);
  cout<<ans<<endl;
  
  return 0;
}