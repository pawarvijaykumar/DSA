#include<iostream>
using namespace std;
//its a row of sum or row wise sum 
// void printSumOfRow(int arr[][3],int row,int col){

//   for(int row=0;row<3;row++)
//   {
//     int sum=0;
//     for(int col =0;col<4;col++)
//     {
//       sum+=arr[col][row];
//     }
//     cout<<sum<<" ";
//   }
    
//   cout<<endl;
//}
void printSumOfCol(int arr[][3],int row,int col){

  for (int col=0;col<3;col++)
  {
    int sum=0;
    for (int row =0;row<4;row++)
    {
      sum+=arr[row][col];
    }
    cout<<sum<<" ";
  }
    
  cout<<endl;
}
int main(){
  int arr[4][3];
  // cout<<"enter the element of row-wise"<<endl;
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<4;j++){
  //     cin>>arr[i][j];
  //   }
  // }
  // printSumOfRow(arr,3,3);

 cout<<"enter the element of col-wise"<<endl;
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  printSumOfCol(arr,4,3);

  return 0;
}