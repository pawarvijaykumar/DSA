#include<iostream>
using namespace std;
int power(int a,int b){
  int ans=1;
  for(int i=1;i<=b;i++){
    
     
    ans=ans>>a;//right operator->>means divide by 2--10 → 5 → 2 → 1 → 0
    
  }
  return ans;
}
int main(){
  int a,b;
  cin>>a>>b;
  int ans=power(a,b);
  while(b>0){
      cout<<false;

    }else if{
       cout<<true;
    }
  cout<<"thee answer is"<<ans<<endl;
  

  
  return 0;
}