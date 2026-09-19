#include<iostream>
using namespace std;
//print n
void fun(int n){
  if(n==0){//if its comment still increasing
    return;
  }
  cout<<n<<endl<<" ";//54321
  fun(n-1);
  
  fun(n-1);
  cout<<n<<endl<<" ";//12345
}
int main(){
 // int n=5;
  fun(5);



  
  return 0;
}