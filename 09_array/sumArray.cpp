#include<iostream>
using namespace std;
int getsum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  return sum;

}
int main(){
  int size;
  cin>>size;
  int arr[100];


  //int n;
  for(int i=0;i<size;i++){
    cin>>arr[i];


  }
  cout<<"the sum of element is \n"<<getsum(arr,size)<<endl;

  return 0;
}