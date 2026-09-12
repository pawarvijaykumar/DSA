#include<iostream>
#include <cstring>
using namespace std;

int main(){

  //chracter in array
  char arr[5] = {'H', 'e', 'l', 'l', 'o'};

  char name[]="vijay";
  //char ch='A';

  cout<<sizeof(arr)<<endl;//5
  //cout<<strlen()<<endl;

  cout<<name<<endl;
  cout<<sizeof(name)<<endl;//sizeof → counts \0
  cout<<strlen(name)<<endl;//strlen → does NOT count \0


  //cout<<sizeof(c)<<endl;
  
  //character in pointer
  
  //char arr[6]={1,2,3,4,5,6};
  char *p=arr;
  
  cout<<*p<<endl;//H
  return 0;
}