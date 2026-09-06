#include<iostream>
using namespace std;
int main(){

  
  //row wise input
  // for(int i=0;i<3;i++){
    
  //   for(int j=0;j<4;j++){
    //     cin>>arr[i][j];
    
    
    //   }
    // }
    // for(int i=0;i<3;i++){
      
    //   for(int j=0;j<4;j++){
      //   cout<<arr[i][j];
      
      
      
      
      //   }
      //   cout<<endl;
      
      // }

//coloum  wise
// int arr[4][3]={1, 2 ,3 ,4, 5 ,6, 7, 8, 9 ,10,11 ,12};

// for(int i=0;i<4;i++){
   
//   for(int j=0;j<3;j++){
//   cout<<arr[i][j];
  
  
  
    
//   }
//   cout<<endl;

// }



//row wise

//int arr[3][4]={1, 2 ,3 ,4, 5 ,6, 7, 8, 9 ,10,11 ,12};
int arr[3][4]={{111},{222},{333}};

  for(int i=0;i<3;i++){
   
    for(int j=0;j<4;j++){
    cout<<arr[j][i];
  
  
  
    
    }
    cout<<endl;

  }
  return 0;
};