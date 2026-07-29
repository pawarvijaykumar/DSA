#include<iostream>
using namespace std;
int main(){
  int secondsmallest;
   int lenght=7;
   int max[]={23,44,55,66,77,-88,-99};
   int smallest=max[0];

   secondsmallest=max[1];
   for(int i=0;i<lenght;i++){
    if(max[i]<smallest){
      secondsmallest=smallest;
      smallest=max[i];
    }
/*If number is:

 bigger than secondsmallest
 but not equal to smallest 

// Then update secondsmallest.*/
    else if(max[i]<secondsmallest&&max[i]!=smallest){

       //largest=max[i];
       //secondsmallest=smallest;
      secondsmallest=max[i];


    }

   }
   cout<<"the smallest element in the arrary\n"<<smallest<<endl;
   cout<<"the secondsmalest element in the arrary\n"<<secondsmallest<<endl;
   return 0;
  }