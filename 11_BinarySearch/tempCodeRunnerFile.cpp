#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
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
    return -1;//otherwise print -1
}

int main(){
  
  int a[6]={5,7,7,8,8,10};
  int aindex= binarySearch(a,6,8);
  cout<<"the key value is\n"<<aindex<<endl;

  return 0;
}


/*time complexicity =0(logn)-->
you move to find for right or left mid arr n/2,againn/2......upto 
n/2^k=1,then
n=2^k---->k=logn this is a time complexcity*/
