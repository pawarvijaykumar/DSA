

/*
defination-Compare neighbors and swap them if they are in the wrong order


*/



#include<iostream>
using namespace std;
  void bubbleSort(int arr[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
      }
    }
  }
int main(){
  int arr[6]={6,5,4,3,2,1};
  bubbleSort(arr,6);
  //cout<<"enter the element"<<endl;
  for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";  
  }
  return 0;
}