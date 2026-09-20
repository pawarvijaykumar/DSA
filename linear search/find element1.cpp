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
  
  int arr[6]={2,4,5,-5,30,65};
  cout<<"enter the element \n"<<endl;
  cin>>arr[6];
  
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


//int arr[]={2,4,5,-5,30,65};
  //cout<<"enter the element \n"<<endl;