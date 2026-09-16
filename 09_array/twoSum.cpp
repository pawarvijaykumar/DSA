#include<iostream>
#include<vector>
using namespace std;
vector<int> threeSum(vector<int>& nums, int target) {
  int n=nums.size();
        //int target=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){

      
        if(nums[i]+nums[j]+nums[k]==target){
          return {i,j,k};//means is store index value 
       
        }   
      }        
    }
  }
  return {};
}

int main(){
  vector<int>nums={2,7,15,11};
  int target=24;
  vector<int>ans=threeSum(nums,target);
  cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
  
    
  //twoSum(nums,9);
  
  return 0;
}