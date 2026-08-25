#include<iostream>
using namespace std;

long long int binarySearch(int n){
        //so i long y was i write becuse its range 21^n+1 or 21^n-1
        int start=0;
        int end=n;
        long long int mid=(start+end)/2;
        long long int ans=-1;
        while(start<=end){
            long long int square=mid*mid;

            if(square==n){
                return mid;

            }else if(square<n){//move reght side
                start=mid+1;
                ans=mid;
            }else{
                end=mid-1;//otherwise left side
            }
            mid=(start+end)/2;
        }
        return ans;
    }
double moreprecision(int n,int precision,int tempSol){//this function means if ub want to take this root of 78 is 8.831 given the point enterger value
  double factor=1;
  double ans=tempSol;
  for(int i=0;i<precision;i++){
    factor=factor/10;

    for(double j=ans;j*j<n;j=j+factor){
      ans=j;
    }
  }
  return ans;
} 
int main(){
  int n;
  cout<<"enter the suare lement is"<<endl;
  cin>>n;
  int tempSol=binarySearch( n);
  cout<<"the sqaure is \n"<<moreprecision(n,3,tempSol)<<endl;


  
  return 0;
}