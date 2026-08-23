#include<iostream>
using namespace std;
int fisrtOcc(int arr[],int n,int key){
  //start position
  
  int start=0;
  int end=n-1;
  int ans=-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(key>arr[mid]){
      ans= mid;
      start=mid-1;
    }else if(key==arr[mid]){
      start=mid+1;
    
    }
    else if(key<arr[mid]){
      end=mid-1;
    }
    mid=(start+end)/2;
  }
  return ans;

}
   
 //

int lastOcc(int arr[],int n,int key){

int start=0;
int end=n-1;
int ans=-1;
while(start<=end){
  int mid=(start+end)/2;
    //return mid;
    if(key==arr[mid]){
      ans =mid;
      start=mid+1;
    }else if(key>arr[mid]){//move right side
      start=mid+1;
    }
    if(key<arr[mid]){//move left side
      end=mid-1;
    }
  

    mid=(start+end)/2;

  }
    
  return ans;

}

int main(){
  int a[5]={1,2,3,3,5};
  int aindex1= fisrtOcc(a,5,3);
  int aindex2= lastOcc(a,5,3);

  cout<<"the first ans last postion of value is 1\n"<<aindex1<<endl;
  cout<<"the first ans last postion of value is 2\n"<<aindex2<<endl;


    
  return 0;
}