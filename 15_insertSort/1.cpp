/*
nsertion Sort is a sorting algorithm where we take one element at a time and insert it into its correct position among the elements already sorted.

Think about arranging playing cards in your hand:

You already have some cards sorted.
Pick the next card.
Move bigger cards to the right.
Insert the new card in the correct position.



and more  important think is its not swap just do shift

*/


#include<iostream>
using namespace std;
 void insertSort(int arr[],int n){
  int i,j;
  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j;
    
    for(j=i-1;j>=0;j--){
      if(arr[j]>temp){
        arr[j+1]=arr[j];

      }else{
        break;
      }
    }
    arr[j+1]=temp;
  }
        
};

 
int main(){
  int arr[5]={5,34,9,2,3};
  insertSort(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }

  
  return 0;
}