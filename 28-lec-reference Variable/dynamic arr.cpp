#include<iostream>
using namespace std;
int getSum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  
  return sum;
}
int main(){
  // char ch='w';
  // cout<<sizeof(ch)<<endl;//1
  // char*c=&ch;
  // cout<<sizeof(c)<<endl;


  // int n;
  // cin>>n;
  // int *arr=new int[n];
  // cout<<n<<endl;

   int n;
   cin>>n;
   int *arr=new int[n];
   //int arr[n];
   
   
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=getSum(arr,n);
  cout<<ans<<endl;

  delete[] arr;//memory release

  return 0;
}