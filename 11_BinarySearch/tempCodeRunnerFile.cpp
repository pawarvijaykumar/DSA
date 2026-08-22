#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid=(start+end)/2;
  while(start<=end){
    if(arr[mid]==key){//key is ur target value
      return mid;


    }
    if(key>arr[mid]){
      start=mid+1;//to move right 
    }else{
      end=mid-1;

    }
    mid=(start+end)/2;//last value which that print
    }
    //return -1;//otherwise print -1
}

int main(){
  
  int a[5]={3,4,3,5,23};
  bool found= binarySearch(a,6,98);
  if(found){
    cout<<"the key value is\n"<<found<<endl;


  }else{
    
    cout<<"the key value is\n"<<found<<endl;

  }

  return 0;
}