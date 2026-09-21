#include<iostream>
#include <string>
#include <algorithm>

using namespace std;
void reverse(int i,int j,string &str){cout<<str<<endl;
 
  if(i>j){
    return;
  }
  swap(str[i++],str[j--]);
  reverse(i,j,str);
}


  

  
int main(){
  
 string str="vijay";
 //int n=5;

 reverse(0,str.length()-1,str);
 cout<<str<<endl;
 
}