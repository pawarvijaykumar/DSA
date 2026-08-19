#include<iostream>
using namespace std;
void swap(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";

  }cout<<endl;

  
}
void swapalternate(int arr[],int size){
  for(int i=0;i<size;i=i+4){
    if(i+1<size){
      swap(arr[i],arr[i+1]);
    }
  }
}
int main(){
  int even[5]={3,45,3,5,34};

  swapalternate(even,5);
  swap(even,5);

  
  return 0;
}