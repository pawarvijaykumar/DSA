#include<iostream>

using namespace std;
int main()
{
//prime number means-->they are two factor ex->2->1,2 or 3->1,3
//non preime means -->thwyt are two or more factor ex-->4-->1,2,4 or 6-->1,2,3,6 
  
  int n;
  cin>>n;
  int i=2;
  //if(5%n){
  while(i<n){//means check the condtion 2-to 14
    if(n%i==0){//14 % 2 == 0-->if it is false=prime
      //1234567-<7 is only divide 1,7 means two factor
      cout<<"is prime number"<<endl;
    }
    else{
      cout<<"no prime number"<<endl;
    }
    i++;
  }//return 0;

}