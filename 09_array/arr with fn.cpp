//means is call the  function in the main function 


#include<iostream>
using namespace std;
void printArray(int arr[],int n){//call function
  cout<<"the array is"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";



  }
cout<<"the print is done \n "<<endl;

  
}
int main(){//main function
  int vijay[23]={2,4,3,5};
  int size=23;
  printArray(vijay,size);

//using the char data type
  char n=5;
  char ch[5]={'e','t','y','f'};
  cout<<ch[3]<<endl;
  for(int i=0;i<n;i++){
    cout<<ch[i]<<" ";

  }
  cout<<"hey king this procees is done "<<endl;

  
  return 0;
}