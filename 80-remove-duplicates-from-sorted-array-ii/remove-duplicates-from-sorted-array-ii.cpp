class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int count=1;
            for(int j= i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                    if(count>2){

                    
                        for(int k=j;k<n-1;k++){
                            nums[k]=nums[k+1];
                        }
                     
                    n--;
                    j--;
                    }
                    

                }
            }

        }
        return n;
            
    }
        
};