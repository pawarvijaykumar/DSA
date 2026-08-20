#include<iostream>
using namespace std;
void user(int arr[],int n){
 int lenght=5;
 arr[0]=23;

 cout<<"outside value"<<endl;
  for(int i=0;i<5;i++){
    cout<<" "<<arr[i];
  }

 
 
  cout<<"the inside value"<<endl;
 }
int main(){
  //int lenght=5;
  int arr[5]={2,5,3,-7,5};
  // int n;
  // cin>>n;
  //user(v,c);
  int sum=0;
  user(arr,5);
  for(int i=0;i<5;i++){
  
    
    cout<<" \n"<<arr[i];
    
  }
  return 0;
}