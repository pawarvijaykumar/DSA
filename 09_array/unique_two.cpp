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
  for(int i=0;i<n;i++){
    ans=ans^arr[i];

  }
  int bit=ans&(-ans);
  int ans1=0;
  int ans2=0;
  for(int i=0;i<<n;i++){
    if(arr[i]&bit){
      ans1=ans1^arr[i];
    }
    else{
      ans2=ans2^arr[i];

    
  
    }
  }
  cout<<"unique value"<<ans<<endl;
  return 0;


}
  