#include<iostream>
using namespace std;
void print (int arr[],int size){
  cout<<"the n of element is "<<size<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
  }
  cout<<endl;
}
/*the n of element is 5
1
3
2
4
5*/
bool linearSrarch(int arr[],int n,int key){
  //base case
  if(n==0){
    return 0;
  }
  if(arr[0]==key){//start in 0 index  to
    return 1;
  }else{
  int remainder=linearSrarch(arr+1,n-1,key);
  return remainder;
  }


}
int main(){
  int arr[5]={1,3,2,4,5};
  int n=5;
  int key=9;
  bool ans=linearSrarch(arr,n,key);
  if(ans){
    cout<<"the element is found"<<" ";

  }else{
    cout<<"the element  is not found "<<" ";
  }
  
  return 0;
}