#include<iostream>
using namespace std;
int  binarySearch(int arr[],int start,int  end,int key){
  //base case
  if(start>end){

    return -1;
  }
  int mid=(start+end)/2;
  if(arr[mid]==key){
    return mid;
  }
  if(arr[mid]<key){
    return binarySearch(arr,mid+1,end,key);
  }else{
    return binarySearch(arr,start,mid-1,key);
    
  }

  
}
int main(){

  int arr[5] = {1, 2, 3, 4, 5};;
  int key=5;
  int ans=binarySearch(arr,0,4,key);
  cout<<ans<<endl;

  
  return 0;
}