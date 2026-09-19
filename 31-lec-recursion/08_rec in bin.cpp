#include<iostream>
using namespace std;
int binSearch(int arr[],int key){
  
  //int mid=(start+end)/2;
  // while(start<=end){
    //base case
    if(key==0||key==1){
      return true;
    }
    if(arr[0]>arr[1]){
      return false;
    }else{
       int remainingpart=binSearch(arr++,key-1);
       return remainingpart;
    }
    
    
  
}


int binarySearch(int arr[], int start, int end, int key)
{
    if(start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key)
        return binarySearch(arr, mid + 1, end, key);

    return binarySearch(arr, start, mid - 1, key);
}
int main(){
  int arr[4]={1,0,2,5};
  
  int ans=binSearch(arr,4);
  //cout<<"the binary in "<<ans<<endl;
  if(ans){
    cout<<"the sort"<<endl;
  }else{
    cout<<"the unsort"<<endl;
  }
  int key=5;
  int ans1=binarySearch(arr,0,4,key);
  cout<<ans1<<endl<<" ";


  return 0;
}