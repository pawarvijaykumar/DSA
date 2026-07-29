
//while--->llop is used to repeat a block of code untill the condition becomes false
/*ex-->given value 1 to 5
  1 true 
  2 true 
  3 true 
  4 true
  5 treu
  6 false the n stop the condtiion is false 
  */
//to print 1-to-5
#include<iostream>

using namespace std;
int main()
{
//   int i=1;
//   while(i<=5){
//     cout<<i<<endl;
//     i++;//withot this ->loop runs forever(infinite loop)or increamnnt

//   }
// }
// how much u want number that much number print
   
  //  int n;
   
  //  cin>>n;
  //  int i=1;
  //  int sum=0;
  //  while(i<=n){
  //   //cout<<i<<"";
  //   sum=sum+i;//ex5 -->15
  //   i=i+1;
  //  }
  //  cout<<"the vlaue of sum is\n"<<sum<<endl;

  // }
//prime number means-->they are two factor ex->2->1,2 or 3->1,3
//non preime means -->thwyt are two or more factor ex-->4-->1,2,4 or 6-->1,2,3,6 

  int n;
  cin>>n;
  if(5%n){
    cout<<"is prime number";
  }else{
    cout<<"no prime number";
  }
  return 0;

}