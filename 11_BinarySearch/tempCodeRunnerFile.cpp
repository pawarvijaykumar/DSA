#include<iostream>
using namespace std;
int fisrtOcc(int arr[],int n,int key){
  //start position
  
  int start=0;
  int end=n-1;
  int ans=-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(key==arr[mid]){
      ans= mid;
      end=mid-1;
    }else if(arr[mid]<key){
      start=mid+1;
    
    }else{
   
      end=mid-1;
    }
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
      start=mid+1;//just  change it postion
    }
    if(key>arr[mid]){//move right side
      start=mid+1;
    }else{
    //move left side
      end=mid-1;
    }
  }
  return ans;

}

int main(){
  int a[6]={5,7,7,8,8,10};
  int aindex1= fisrtOcc(a,6,8);
  int aindex2= lastOcc(a,6,8);

  cout<<"the first ans last postion of value is \n"<<aindex1<<endl;
  cout<<"the first ans last postion of value is 2\n"<<aindex2<<endl;


    
  return 0;
}