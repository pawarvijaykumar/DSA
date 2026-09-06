#include<iostream>
using namespace std;

bool searchElement(int arr[][4],int target,int i,int j){
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      if(arr[i][j]==target){
        return 1;
      }
    }
  }
  return 0;


}
int main(){
  
  int arr[3][4];
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"enter the element id"<<endl;
  int target;
  cin>>target;
  if(searchElement(arr,target,3,4)){
    cout<<"the element is given"<<"";
  }else{
    cout<<"the element is not given"<<"";
  }
  return 0;
}