#include<iostream>
using namespace std;
int main(){
  int row;

  cin>>row;

  int col;

  cin>>col;
  int **arr=new int *[row];//use 2d array
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      arr[i]=new int [row];
    }
  }

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
  }


  cout<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  
  //memeory release
  for(int i=0;i<row;i++){
    delete [] arr[i];

  }
  delete []arr;

  return 0;
}