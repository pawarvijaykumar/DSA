
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{

  int n = nums.size();

  // Step 1: Find pivot
  int i = n - 2;

  while (i >= 0 && nums[i] >= nums[i + 1])
  {
    i--;
  }

  // Step 2: Find element greater than pivot
  if (i >= 0)
  {

    int j = n - 1;

    while (nums[j] <= nums[i])
    {
      j--;
    }

    swap(nums[i], nums[j]);
  }

  // Step 3: Reverse the right part
  reverse(nums.begin() + i + 1, nums.end());
}

int main(){
  vector<int>num={1, 2, 5, 4, 3};
  nextPermutation(num);
  //  for(int x : num) {
  //       cout << x << " ";
  //   }
  int n=num.size();
  for(int i = 0; i < n; i++) {
    cout << num[i] << " ";
  }
  
  return 0;
}

/*



[1, 2, 5, 4, 3]

Our goal is to find the next bigger permutation.

Step 1: Find the pivot

We start checking from the right.

[1, 2, 5, 4, 3]
         ↑  ↑
         4  3

Check:

4 < 3 ❌

Move left:

[1, 2, 5, 4, 3]
      ↑  ↑
      5  4

Check:

5 < 4 ❌

Move left again:

[1, 2, 5, 4, 3]
   ↑  ↑
   2  5

Check:

2 < 5 ✅

So:

pivot = 2

The array is now conceptually:

[1, 2 | 5, 4, 3]
     ↑
   pivot
Step 2: Find a number bigger than pivot

Pivot is:

2

Now start from the right and find the first number greater than 2.

From right:

3 > 2 ✅

So we choose 3.

Now swap:

[1, 2, 5, 4, 3]
    ↕
[1, 3, 5, 4, 2]

So:

[1, 2 | 5, 4, 3]
        ↓ swap 2 and 3
[1, 3 | 5, 4, 2]
Step 3: Reverse the right side

Now look only after the pivot position:

[1, 3 | 5, 4, 2]
        ---------
          right

Currently:

5 4 2

Reverse it:

2 4 5

Therefore:

[1, 3 | 2, 4, 5]

Final answer:

[1, 3, 2, 4, 5]
🧠 Why do we reverse?

After making the number bigger by changing:

2 → 3

we want the smallest possible arrangement after it.

Before reverse:

5 4 2

Smallest arrangement:

2 4 5
*/