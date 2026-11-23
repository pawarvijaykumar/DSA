#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// mw=eaning odf this qution ton find the next smaller in element 

vector<int>nextSmallerElement(vector<int>&arr,int n){
  stack<int> s;
  s.push(-1);
  vector<int>ans(n);
  for(int i =n-1;i>=0;i--){
    int curr=arr[i];
    while(s.top()>=curr){//jab tak chota elelemt na mile aage bad thee jao{
      
      s.pop();//delet kar the jaao jab tak naa mile
    }
    ans[i]=s.top();
    s.push(curr);
    
  }

  return ans;

};

int main() {

    vector<int> arr = {4, 8, 5, 2, 25};

    int n = arr.size();

    vector<int> ans = nextSmallerElement(arr, n);

    cout << "Next Smaller Elements: ";

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}