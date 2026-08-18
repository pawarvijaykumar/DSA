#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  int ans=0;
  for(int i=0;i<<n;i++){
    ans=ans^arr[i];//^ y becuse xxor operator means x^x=0,0^x=x is a properties
    /*
    arr[0]=22
    ans = 0 ^ 22=22
    
    arr[1]=22
    ans =22 ^22=0 */

  }
  cout<<"unique value"<<ans<<endl;
  return 0;


}
  