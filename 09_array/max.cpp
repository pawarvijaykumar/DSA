#include<iostream>
#include<limits.h>//store the range is -2^31 or +2^31
using namespace std;
int getmax(int num[],int n){
  int max=INT_MIN;//minimum range
  for(int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];

    }
  }
  return max;
  

  
}
int main(){
  int size;
  cin>>size;
  int num[100];
  for(int i=0;i<size;i++){
    cin>>num[i];
  }
  cout<<"the maximum number is \n"<<getmax(num,size)<<endl;//calling the function 
  
  return 0;
}