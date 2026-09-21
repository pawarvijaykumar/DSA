#include<iostream>
#include<vector>
using namespace std;
//Find Minimum in Rotated Sorted Array.
int findMin(vector<int>& nums, int start, int end)
  {
        // Base case
  if(start == end)
  {
    return nums[start];
  }

  int mid = start + (end - start) / 2;

  if(nums[mid] > nums[end])
    {
            // Minimum is on the right
      return findMin(nums, mid + 1, end);
    }
    else
    {
            // Minimum is on the left or at mid
      return findMin(nums, start, mid);
    }
    }

    int findMin(vector<int>& nums)
    {
        return findMin(nums, 0, nums.size() - 1);
    }


int main(){
  
  return 0;
}
  