#include<iostream>
using namespace std;
int fastPower(int a ,int b,int MOD){
  int ans=1;
  while(b>0){
    if(b&1){
      ans=(ans*a)%MOD;//agar a value odd hui toh multiplication kar dena 
    }
    a=(a*a)%MOD;//not multplication 
    b=b/2;
  }
  return ans;
//complexcity 0(logn)->because /2 0r  may be
}
int main(){
  int a =2;
  int b=10;
  int MOD=1000000007;
  cout<<"the fast exponenation is"<< fastPower(a,b,MOD)<<endl;
  
  return 0;
}