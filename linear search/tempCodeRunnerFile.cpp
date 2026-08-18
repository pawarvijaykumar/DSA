#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){

      return 1; //means is true
      }
    }
    return 0;//false

//bool-->>menas treu or false
}
int main(){
  int size;
  cout << "Enter the size of array: ";
  cin >> size;
  //int arr[]={2,4,5,-5,30,65};
  //cout<<"enter the element \n"<<endl;
  int arr[size];
  cout<<"enter the "<<size<<"element:\n";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  bool found=search(arr,10,key);
  if(found){
    cout<<"the elment is found"<<endl;
    } 
    else{
    cout<<"the elment is not  found"<<endl;

    }
  
  
  return 0;
}