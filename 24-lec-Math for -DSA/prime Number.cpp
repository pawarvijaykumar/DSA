#include<iostream>
using namespace std;

bool IsPrime(int n){
  if(n<=1){//f n is 1, 0, or negative → it is not prime.
    return false;

  }
  for(int i=2;i*i<=n;i++){//Because 2 is the smallest possible factor other than 1.
    if(n%i==0){
      return false;

    }
  }
  return true;

};
/*A prime number is a number having exactly 2 factors:

1 and itself.
2 → 1, 2        → Prime
3 → 1, 3        → Prime
5 → 1, 5        → Prime
7 → 1, 7        → Prime

6 → 1, 2, 3, 6 → Not Prime*/
int main(){
  int n;
  cout<<"enter the number";
  cin>>n;
  if(IsPrime(n)){

    cout<<"the number is prime ";

  }else{
    cout<<"the number is not prime ";
  }
  return 0;

}