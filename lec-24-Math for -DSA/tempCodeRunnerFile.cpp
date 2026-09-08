#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
  if(n <= 2)
    return 0;
  int Count=0;
  vector<bool>prime(n,true);
  prime[0]=prime[1]=false;
  for(int i =2; i<n;i++) {
    if(prime[i]) {
        Count++;

        for(int j = 2*i;j<n;j +=i) {
            prime[j]=false;
        }
    }
  }
  return Count;
};


int main(){
  int n;
  cout<<"counter the lement ";
  cin>>n;
  int ans=countPrime(n);
  cout<<ans<<"";

  
  return 0;
}