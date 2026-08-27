

/* selection Sort--> is a simple sorting algorithm where we repeatedly find the smallest element from the unsorted part and put it at the correct position.*/


#include<iostream>
using namespace std;
int sortArray(int arr[],int n) {
        
       
    int i, j;
        
    for(int i=0;i<n-1;i++){
        int minIndex=i;//so i start from 1
        for(int j=i+1;j<n;j++){//i+1 means 1 se aage jao like 2,3,4,upto
            if(arr[j]<arr[minIndex]){//agar i j se bada hai toh equal ho jao
                minIndex=j;
            }

        }
        swap(arr[minIndex],arr[i]);
    }
}
       
        

int main(){
    int arr[5]={3,5,7,3,4};
    sortArray(arr,5);
    cout<<"the selection array is \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl<<"";
    }
  
    return 0;
}