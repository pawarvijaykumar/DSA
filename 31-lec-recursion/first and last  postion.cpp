#include <iostream>
using namespace std;

int firstOcc(int arr[], int start, int end, int key)
{
    // Base case
    if(start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key)
    {
        int left = firstOcc(arr, start, mid - 1, key);

        if(left != -1)
            return left;

        return mid;
    }

    if(arr[mid] < key)
    {
        return firstOcc(arr, mid + 1, end, key);
    }

    return firstOcc(arr, start, mid - 1, key);
}


int lastOcc(int arr[], int start, int end, int key)
{
    // Base case
    if(start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key)
    {
        int right = lastOcc(arr, mid + 1, end, key);

        if(right != -1)
            return right;

        return mid;
    }

    if(arr[mid] < key)
    {
        return lastOcc(arr, mid + 1, end, key);
    }

    return lastOcc(arr, start, mid - 1, key);
}


int main()
{
    int arr[6] = {5, 7, 7, 8, 8, 10};

    int key = 8;

    int first = firstOcc(arr, 0, 5, key);
    int last = lastOcc(arr, 0, 5, key);

    cout << "First = " << first << endl;
    cout << "Last = " << last << endl;

    return 0;
}


/*

// First
end = mid - 1;

// Last
start = mid + 1;


// First
end = mid - 1;

// Last
start = mid + 1;
*/