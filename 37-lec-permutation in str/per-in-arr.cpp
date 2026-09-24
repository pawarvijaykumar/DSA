#include <iostream>
using namespace std;

void solve(int  arr[],int n, int index) {

    // Base case
  if(index >= n) {
    for(int i=0;i<n;i++){

      cout << arr[i] << " ";
    }
      return;
    }
    cout<<endl;

    for(int i = index; i < n; i++) {

        // choose
      swap(arr[index], arr[i]);

        // recursive call
      solve(arr,n, index + 1);

        // backtrack
      swap(arr[index], arr[i]);
    }
}

int main() {

  int arr[3] = {1,1,5};

  solve(arr, 3,0);

  return 0;
}