#include<iostream>
using namespace std;
//to lower case later
string toLowerCase(string s) {
        //char ch;
  int n=s.size();
  for(int i=0;i<n;i++){
    if(s[i]>='A' && s[i]<='Z'){
      s[i]=s[i]+32;
    }

  }
  return s;
        
}

//to upercase later

string toUpperCase(string s1) {
        //char ch;
  int n=s1.size();
  for(int i=0;i<n;i++){
    if(s1[i]>='a' && s1[i]<='z'){
      s1[i]=s1[i]-32;//diffrence for oly change of sine to "-"
    }

  }
  return s1;
        
}
int main(){
  string str="HELOO";
  
  string ans=toLowerCase(str);
  cout<<ans<<endl;


  cout<<endl;
  string str1="hello";
  string ans1=toUpperCase(str1);
  cout<<ans1<<endl;
  
  return 0;
}