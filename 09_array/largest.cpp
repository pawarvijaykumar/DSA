#include<iostream>
using namespace std;
int main(){
  
  //  int lenght=6;
  // int max[]={12,34,56,76,54,32};
  // int largest=max[0];
  
  // for(int i=0;i<=lenght;i++){
  //   if(max[i]>largest){
      
  //     largest=max[i];
  //   }
  // }
  // cout<<"the largset "<<largest<<endl;
  

  
  // return 0;
  int secondlargest;
   int lenght=7;
   int max[]={23,44,55,66,77,88,99};
   int largest=max[0];

   secondlargest=max[0];
   for(int i=0;i<lenght;i++){
    if(max[i]>largest){
      largest=max[i];
      //secondlargest=largest;
    }
/*If number is:

 bigger than secondLargest
 but not equal to largest 

// Then update secondLargest.*/
    else if(max[i]>secondlargest&&max[i]!=largest){

       //largest=max[i];
      secondlargest=max[i];
      //secondlargest=largest;


    }

   }
   cout<<"the largest element in the arrary\n"<<largest<<endl;
   cout<<"the secondlargest element in the arrary\n"<<secondlargest<<endl;
   return 0;
}

