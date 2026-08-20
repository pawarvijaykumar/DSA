#include<iostream>
using namespace std;
void  reverse(int arr[],int n){
  int start=0;
  int end=n-1;//reverse
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;

  }

}
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";//;<<endl;
  }
  cout<<endl;
}
int main(){
  int arr[7]={2 ,4 ,2, 7,8,4, 23};
  reverse(arr,7);
  printArray(arr,7);
  
  return 0;
}