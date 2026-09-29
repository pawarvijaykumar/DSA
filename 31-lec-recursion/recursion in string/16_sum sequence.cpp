#include<iostream>
#include<vector>
using namespace std;
void solve(int index, vector<int>& arr, vector<int>& output, int sum, int k)
{
    if(index == arr.size())
    {
        if(sum == k)
        {
            for(int x : output)
                cout << x << " ";

            cout << endl;
        }

        return;
    }

    // TAKE
    output.push_back(arr[index]);

    solve(index + 1,
          arr,
          output,
          sum + arr[index],
          k);

    // NOT TAKE
    output.pop_back();

    solve(index + 1,
          arr,
          output,
          sum,
          k);
}
int main()
{
    vector<int> arr = {1,3,1};
    vector<int> output;

    solve(0, arr, output, 0, 5);

    return 0;
}

/*
[]
[1]
[3]
[1]
[1,3]-->4
[1,1]   
[3,1]-->4
[1,3,1]

*/