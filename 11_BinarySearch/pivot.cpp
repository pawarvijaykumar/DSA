#include<iostream> 
using namespace std; 
int pivot(int arr[],int n){ 
  int start=0; 
  int end=n-1; 
  int mid=(start+end)/2; 
  while(start<=end){ 
    if(arr[mid]>=arr[0]){ 
      start=mid+1; 
 
    }else{ 
      end=mid;//means reverse 
    } 
    mid=(start+end)/2; 
  } 
  return start; 
 
} 
 
int main(){ 
  int arr[6]={3,8,10,17,1}; 
  //int arrindex=pivot(arr,3); 
  cout<<"the pivot element is \n"<<pivot(arr,6)<<endl; 
   
  return 0; 
}see code is correct or no ?