#include<iostream>
using namespace std;
int main(){
 // int size=0;
  int arr[6]={3 , 3, 4, 75 ,57, 46};
  for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
      if(arr[i]==arr[j]){
        cout<<" is dublocate: "<<arr[i]<<endl;
      }
    }
  }

  return 0;
}