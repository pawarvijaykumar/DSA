#include <algorithm>
#include<iostream>
#include<limits.h>//store the range is -2^31 or +2^31
using namespace std;
int getmin(int num[],int n){
  int minimum=INT_MAX;//minimum range
  for(int i=0;i<n;i++){
    minimum=min(minimum,num[i]);
    //if(num[i]<min){//its only change the shine only 
    //  min=num[i];

    }
  //}
  return minimum;
  

  
}
int main(){
  int size;
  cin>>size;
  int num[100];
  for(int i=0;i<size;i++){
    cin>>num[i];
  }
  cout<<"the minimum number is \n"<<getmin(num,size)<<endl;//calling the function 
  
  return 0;
}