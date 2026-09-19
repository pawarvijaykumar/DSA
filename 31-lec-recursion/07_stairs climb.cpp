#include<iostream>
using namespace std;
int climbStairs(int n) {
  if(n<0 ){
    return 0;
    } if(n==0){
      return 1;
    }
  //int ways;
    int ans=climbStairs(n-1)+climbStairs(n-2);
        //ways++;
    return ans;
        
}
int main(){
  int n=6;
  int index=climbStairs(n);
  cout<<index;
  
  return 0;
}