#include<iostream>
using namespace std;
void sortArray(int arr[],int n) {
        
       
  if(n==0||n==1){
    return ;
  }
 
  int minIndex =0;     
  for(int j=1;j<n;j++){
    
       
    if(arr[j]<arr[minIndex]){
       minIndex=j;
               
      }
    }swap(arr[0],arr[minIndex]);
    
    sortArray(arr+1,n-1);
    
}
int main(){
  int arr[5]={6,4,6,9,8};
  sortArray(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  //cout<<ans;
  return 0;
}

//4 6 6 8 9 