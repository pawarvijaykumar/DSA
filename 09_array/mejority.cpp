#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
  int n=nums.size();
  int count=0;
  int candidate=0;
  for(int i=0;i<n;i++){
    if(count==0){
      
      candidate=nums[i];
    }
    if(nums[i]==candidate){
      count++;
    }else{
      count--;
    }
  }
  return candidate;
  
}
int main(){
  vector<int>nums={2,2,1,1,1,2,2,6,6,6,6,6,6,6,6,};
  cout<<majorityElement(nums)<<endl;

  
  return 0;
}