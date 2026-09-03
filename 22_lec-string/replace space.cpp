#include<iostream>
using namespace std;
string repalceString(string &str){
  string temp="";
  for(int i=0;i<str.length();i++){
    if(str[i]==' '){
      temp.push_back('$');
      temp.push_back('4');
      temp.push_back('@');



    }else{
      temp.push_back(str[i]);


    }

  }
  return temp;

}
int main(){
  string str="lets take a breake";
  cout<< repalceString(str);
  
  return 0;
}