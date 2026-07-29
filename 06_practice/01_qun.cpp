#include<iostream>
#include<math.h>
using namespace std;
  int main(){
    int n;
    cin>>n;
    int ans=0;
    //int digit=1;
     while(n!=0){
      int digit=n%10;
      ans=(ans*10)+digit;
      //ans=(digit*10)+ans;

      n=n/10;
      //return ans;
     }
     cout<<"the number is "<<ans;
     //return ans;

  }