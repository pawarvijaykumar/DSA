#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
  int start=0;
  int end=s.size()-1;
  for(int i=0;i<end;i++){
    while(start<=end){
      swap(s[start],s[end]);
        start++;
        end--;
    }
  }
        
    //return s;
};


int main(){
  vector<char>s={'e','t','h','j'};
  reverseString(s);
  cout<<"the string is"<<endl;
  for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";

  }
  //cout<<char()<<" ";
  return 0;
}