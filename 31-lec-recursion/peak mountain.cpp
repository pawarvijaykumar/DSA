#include <iostream>
using namespace std;

int peak(int arr[], int start, int end)
{
    // Base case
    if(start == end)
    {
        return start;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] < arr[mid + 1])
    /*
    arr[3] < arr[4]
    7 < 6  ❌*/
    {
        // Peak is on right side
        return peak(arr, mid + 1, end);
    }
    else
    {
        // Peak is on left side or mid
        return peak(arr, start, mid);
    }
}

int main()
{
    int arr[7] = {1, 3, 5, 7, 6, 4, 2};

    int n = 7;

    int ans = peak(arr, 0, n - 1);

    cout << "Peak index = " << ans << endl;
    cout << "Peak value = " << arr[ans] << endl;

    return 0;
}