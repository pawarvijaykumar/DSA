#include<iostream>
using namespace std;
//without use j data type 
// bool palindrome(int i, string &s) {

//     if(i >= s.length() / 2) {
//         return true;
//     }

//     if(s[i] != s[s.length() - i - 1]) {
//         return false;
//     }

//     return palindrome(i + 1, s);
// }


bool palindrom(int i,int j,string &str){


  
  if(i>=j){

  /*
  m   a   d   a   m
    ↑       ↑
    i       j
    1       3
  
    m   a   d   a   m
        ↑
       i,j
        2

        i >= j

        2 >= 2 so is true
  */
    return true;

  }
  if(str[i++]!=str[j--]){
    return false;
  }
  return palindrom(i+1,j-1,str);
}
  


int main(){
  string str="madam";
  cout<<str<<endl;
  if(palindrom(0,str.length()-1,str)){


    cout<<"the its palindrom"<<endl;
  }else{
    cout<<"the its not palindrom"<<endl;
  }
  
 //cout<<"the palindrom is "<<str<<endl;
  

  
  return 0;
}