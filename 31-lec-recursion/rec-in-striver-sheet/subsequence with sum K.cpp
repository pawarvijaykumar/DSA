#include <iostream>
#include <vector>
using namespace std;

bool solve(int index, vector<int>& arr, int sum, int k)
{
    // Base case
    if(index == arr.size())
    {
        return sum == k;
    }

    // TAKE
    if(solve(index + 1, arr, sum + arr[index], k))
        return true;

    // NOT TAKE
    if(solve(index + 1, arr, sum, k))
        return true;

    return false;
}

int main()
{
    vector<int> arr = {1, 10, 4, 5};

    int k = 16;

    if(solve(0, arr, 0, k))
        cout << "true";
    else
        cout << "false";

    return 0;
}

//1 + 10 + 5 = 16