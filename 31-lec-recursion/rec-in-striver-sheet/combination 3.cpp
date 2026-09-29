#include <iostream>
#include <vector>
using namespace std;

void solve(int start, int k, int target,
           vector<int>& temp,
           vector<vector<int>>& ans)
{
    // Base case
    if(k == 0)
    {
        if(target == 0)
            ans.push_back(temp);

        return;
    }

    // Try numbers from start to 9
    for(int i = start; i <= 9; i++)
    {
        // choose
        temp.push_back(i);

        // recursion
        solve(i + 1, k - 1, target - i, temp, ans);

        // undo
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<vector<int>> ans;
    vector<int> temp;

    solve(1, k, n, temp, ans);

    return ans;
}

int main()
{
    int k = 3;
    int n = 7;

    vector<vector<int>> ans = combinationSum3(k, n);

    // Print answer
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}