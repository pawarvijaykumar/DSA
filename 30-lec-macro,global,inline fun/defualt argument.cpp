#include<iostream>
using namespace std;
//Default argument rightmost side se continuous hona chahiye.
void change(int arr[],int n,int start=5){//dena hai heto dete warna me khude se lelunga 
  for(int i=0;i<start;i++){
    cout<<arr[i]<<" ";
  }

}
// int print(int x=10){
//   cout<<x<<endl;
// }
int main(){
  int arr[5]={1,2,3,4,5};
  int size=5;
  change(arr,size);//kyoonki start=5 i already wrote
  cout<<endl;
  change(arr,size,4);
  //int x=20;
  //cout<<x<<endl;//20
  //print();
  //cout<<x<<endl;
  return 0;
}