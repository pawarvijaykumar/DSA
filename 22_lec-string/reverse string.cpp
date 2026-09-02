#include<iostream>
using namespace std;
void reverseString(char name[],int n){
  
  int start=0;
  int end=n-1;
  while(start<=end){
    swap(name[start++],name[end--]);
  }
  

}
int getlength(char name[]){  
  int count=0;
  for(int i=0;name[i]!='\0';i++){//the arr will be stop upto null come and then after is given automaticaly stop and then we know lentgh of arr
    count++;

  }
  return count;
}

int main(){
  char name[20];
  cout<<"enter your name"<<endl;
  cin>>name;
  int len=getlength(name);
  cout<<"the reverse string is "<<len<<endl;
  reverseString(name,len);
  cout<<"the name is   "  <<name<<endl;
  return 0;
};

  
  

  // int getlength(char name[]){
  // int count=0;
  // for(int i=0;name[i]!='\0';i++){//the arr will be stop upto null come and then after is given automaticaly stop and then we know lentgh of arr
  //   count++;

  //}
  // return count;

// int main(){
//   char name[20];
//   cout<<"enter your name"<<endl;
//   cin>>name;
//   //name[3]='\0';//is a null chararcter means when i enter mynname vijaybthe give vu-ij becuse index is 3 null character
//   cout<<"the name is   "  <<name<<endl;
//   cout<<"the lentgh of my name is "<<getlength(name);

//   return 0;
// }