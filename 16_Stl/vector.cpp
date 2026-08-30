/*
so vetor is dynamic array

*/
#include<iostream>

#include<vector>

using namespace std;


int main() {

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
   //so aftre sort like this 10,20,30
    // arr.pop_back(10);
    // arr.pop_back(20);
    // arr.pop_back(30);
    
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    
    
    arr.pop_back();//it remove the last eolement means 30
    cout<<" after the pop element is "<<endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
  return 0;
}
  
