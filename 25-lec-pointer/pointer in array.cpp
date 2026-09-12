#include<iostream>
using namespace std;
int main(){
  //int i;
  
  int arr[10]={19,39,37,548};
  int *p=arr;
  cout<<arr<<endl;
  //or
  
  cout<<&arr[0]<<endl;
  cout<<*p<<endl;//19
  *p++;
  cout<<*p<<endl;//39
  
  // *p++;
  // cout<<*p<<endl;
  // *p++;
  // cout<<*p<<endl;
  *p=*p+1;
  cout<<*p<<endl;//39+1=40
  //cout<<arr[i]<<endl;

cout<<arr[3]<<endl;

int i=2;
cout<<i[arr]<<endl;//37
//temp variable
int temp[10];
cout<<sizeof(temp)<<endl;//40 1 int me 10 bytes means 10*temp =40
cout<<"1st"<<sizeof(*temp)<<endl;//its means first index call in bytes==4
cout<<"2st"<<sizeof(&temp)<<endl;

  
  
  return 0;
}