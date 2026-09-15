#include<iostream>
using namespace std;

//inline is a request to the compiler, not a guarantee.

//The compiler decides whether actually to inline the function
inline int square(int x){
  return x*x;


}
int main(){
  int x;
  cout<<"enter the square value "<<endl;
  cin>>x;
  cout<<"the square value is \n"<<square(x)<<endl;
  
  return 0;
}