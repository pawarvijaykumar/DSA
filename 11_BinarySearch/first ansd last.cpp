#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int n){
  //start position
  
  int start=0;
  int end=n-1;
  while(start<=end){
    int mid=(start+end)/2;
   // return mid;key==arr[mid
    if(key==arr[mid]){
    //start=mid+1;
    return mid;
    }
    else if(key>arr[mid]){
      start=mid+1;
    }else{
      end =mid-1;
    }
    //mid=(start+end)/2;

  }
    
 //
}
int binarySearch(int arr[],int key,int n){
int start=0;
int end=n-1;
int mid=(start+end)/2;
while(key==arr[mid]){
    //return mid;
    if(key==arr[mid]){
      start=mid+1;
    }else{
      start=mid-1;
    }
    if(key>arr[mid]){
      start=mid+1;
    }else{
      mid=mid-1;
    }
  

   // mid=(start+end)/2;

  }
    
  return -1;

}

int main(){
  int a[5]={4,5,4,3,6};
  int aindex= binarySearch(a,5,4);
  cout<<"the first ans last postion of value is\n"<<aindex<<endl;


    
  return 0;
}