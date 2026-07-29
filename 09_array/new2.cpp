#include<iostream>
using namespace std;
int main(){
  
 


  int arr[10000]={1};
 
  cout<<"the value odf the array \n "<<arr[100]<<endl;
  
  return 0;

// output is->0
// but i want 0 instead of then how to code change implemention to w'll come 1
// let see

  int arr[10000];
  for(int i=0;i<10000;i++){
    arr[i]=1;
  }
  //arr[10000]=1;
  cout<<"the value odf the array \n "<<arr[100]<<endl;
  
  return 0;

  int item[15]={3,4};
  int n=14;
  for(int i=0;i<n;i++){
   

    cout<<"the value of "<<item[i]<<endl;
  }
  return 0;
}