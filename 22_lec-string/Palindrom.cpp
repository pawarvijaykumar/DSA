#include<iostream>
using namespace std;
bool palindrom(int  arr[],int n){
  int start=0;
  int end=n-1;
  while(start<=end){
    if(arr[start]!=arr[end]){
      return 0;
    }else{
      start++;
      end--;
    }
  }
  return 1;

}
int main(){
  int arr[3]={'a','r','t'};
  int index=palindrom(arr,3);
  
  cout<<"the palindrom is "<<index<<endl;
  

  
  return 0;
}