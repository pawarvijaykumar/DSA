#include<iostream>
#include<climits>
using namespace std;


int  LargestSumOfRow(int arr[][3],int row,int col){
  int max=INT_MIN;
  int rowIndex=-1;
  for(int row=0;row<3;row++){
    int sum=0;
    for (int col=0;col<3;col++){
      sum+=arr[row][col];
    }
    if(sum>max){
      max=sum;
      rowIndex=row;
    }

  }
  cout<<"the row sumis"<<max<<endl;
  return rowIndex;

}
int main(){
  int arr[3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
//   printSumOfCol(arr,4,3);


  int ans=LargestSumOfRow(arr,3,3);
  cout<<"the large Sum is"<<ans<<endl;

  return 0;
}