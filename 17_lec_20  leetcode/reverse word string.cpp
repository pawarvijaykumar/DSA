#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
  int start=0;
        //int end=n-1;
  for(int i=0;i<=s.size();i++){
  if(i==s.size()||s[i]==' ' ){
    reverse(s.begin()+start,s.begin()+i);
      start=i+1;
                
    }

  }
  return s;
        
}

int main(){
  string s="lets take a breake";
  cout<<reverseWords(s);


  
  return 0;
}