#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(string num, long long target, int index,
               long long value, long long prev,
               string expression, vector<string>& ans)
    {
        // Base case
        if(index == num.length())
        {
            if(value == target)
            {
                ans.push_back(expression);
            }
            return;
        }

        long long current = 0;

        // Try taking one digit, two digits, three digits...
        for(int i = index; i < num.length(); i++)
        {
            // Leading zero is not allowed
            if(i > index && num[index] == '0')
                break;

            current = current * 10 + (num[i] - '0');

            string currentString = num.substr(index, i - index + 1);

            // First number
            if(index == 0)
            {
                solve(num, target, i + 1,
                      current, current,
                      currentString, ans);
            }
            else
            {
                // +
                solve(num, target, i + 1,
                      value + current,
                      current,
                      expression + "+" + currentString,
                      ans);

                // -
                solve(num, target, i + 1,
                      value - current,
                      -current,
                      expression + "-" + currentString,
                      ans);

                // *
                solve(num, target, i + 1,
                      value - prev + prev * current,
                      prev * current,
                      expression + "*" + currentString,
                      ans);
            }
        }
    }


    vector<string> addOperators(string num, int target)
    {
        vector<string> ans;

        solve(num, target, 0,
              0, 0, "", ans);

        return ans;
    }
};


int main()
{
    Solution obj;

    string num = "123";
    int target = 6;

    vector<string> ans = obj.addOperators(num, target);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}