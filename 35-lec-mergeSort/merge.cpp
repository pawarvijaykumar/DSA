#include<iostream>
using namespace std;
void merge(int arr[],int start,int end){
  int mid=(start+end)/2;

  int len1=mid-start+1;
  int len2=end-mid;

  //two seperate arrray

  int *arr1=new int [len1];
  int *arr2=new int [len2];

  int mainArrayIndex=start;

  for(int i=0;i<len1;i++){
    arr1[i]=arr[mainArrayIndex++];

  }
  
  
  
  mainArrayIndex=mid+1;;
  
  for(int i=0;i<len2;i++){
    arr2[i]=arr[mainArrayIndex++];
  }
  int index1=0;
  int index2=0;

  mainArrayIndex = start;


  while(index1<len1&&index2<len2){
    if(arr1[index1]<arr2[index2]){
      arr[mainArrayIndex++]=arr1[index1++];
      
    }else{
      arr[mainArrayIndex++]=arr2[index2++];

    }

  }
  while(index1<len1){
    arr[mainArrayIndex++]=arr1[index1++];
    
  }
  while(index2<len2){
    arr[mainArrayIndex++]=arr2[index2++];

  }
  delete[]arr1;
  delete[]arr2;
}


void mergeSort(int arr[],int start,int end){
  //base case 
  if(start>=end){
    return;
  }
  int mid=(start+end)/2;

   mergeSort(arr,start,mid);

   mergeSort(arr,mid+1,end);


   merge(arr,start,end);




}
int main(){
  int arr[8]={7,6,5,4,9,0,3,5};
  int n=8;
  mergeSort(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}