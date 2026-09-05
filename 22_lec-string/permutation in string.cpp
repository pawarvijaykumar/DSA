#include<iostream>
using namespace std;

bool checkInclusion(string s1, string s2) {
  if(s1.length()>s2.length()){
    return false;

  }
        
  int freq[26]={0};
  for(int i=0;i<s1.length();i++){
    freq[s1[i]-'a']++;
  }
  for(int i=0;i<s2.length();i++){
    freq[s2[i]-'a']--;
  }
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      return false;

    }
  }
        
  return true;
}



int main(){
  string  s1="ab";
  string   s2="eidbaooo";

  cout<<checkInclusion(s1,s2)<<endl;

  
  return 0;
}