#include<iostream>
#include<string>
//#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
  int n=s.size();
  int m=t.size();
    if(n!=m){
      return false;
    }
    int count[26]={0};


    for(int i=0;i<n;i++){
      count[s[i]-'a']++;
    } 
        
    for(int i=0;i<m;i++){
      count[t[i]-'a']--;
    } 
    for(int i=0;i<26;i++){
      if(count[i]!=0){
        return false;
      }
    }
  return true;
}

int main(){
  string s="anagram";
  string t="nagargfm";
  int ans=(isAnagram(s,t));
  cout<<ans<<endl;
  
  return 0;
}