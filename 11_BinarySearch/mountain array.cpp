
#include<iostream>
using namespace std;


int peakIndexInMountainArray(int arr[],int n) {
  int start=0;
  int end=n-1;
  int mid=(start+end)/2;
  while(start<end){
    if(arr[mid]<arr[mid+1]){

      start=mid+1;
            
    }else{
      end=mid;

    }
    mid=(start+end)/2;
  }
  return start;
};

int main(){
  int  arr[4]={1,2,4,2};
  int arrindex=peakIndexInMountainArray(arr,4);
  cout<<"the mountail arr id\n"<<arrindex<<endl;
  return 0;

}