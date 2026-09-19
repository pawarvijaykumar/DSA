#include<iostream>
using namespace std;
int finbonacci(int n){
  //base case.
  if(n==0 ||n==1){

    return n ;
  }
  //0, 1, 1, 2, 3, 5, 8, 13...
  int smallervalue=finbonacci(n-1);
  int largevalue=finbonacci(n-2);
  int ans= smallervalue+largevalue;
  return ans;


}
int main(){
  // int n;
  // cin>>n;
  int index=finbonacci(7);
  cout<<index<<endl<<" ";
  
  return 0;
}