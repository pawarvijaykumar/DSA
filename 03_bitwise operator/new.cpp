/*
1)OR|-->If any one bit is 1, result is 1
ex-->0101
0011
-----
0111
XOR ^-->cIf bits are different → 1
ex-->0101
0011
-----
0110


3)NOT~-->Reverse all bits.
ex-->cout << (~5);//outpt-->6


4)AND-->divided
ex-->5 =0101
     3 =0011
    ------------
        0001
*/




// #include<iostream>
// using namespace std;

// int main(){
//   int a=5;
//   int b=3;
//   cout<<(a&&b)<<endl;//AND operator
//   cout<<(a||b)<<endl;//OR operator
//   cout<<(a^b)<<endl;//XOR opetor
//   cout<<(~a)<<endl;//NOT operator-->meansd implement
//   cout<<(5<<1)<<endl;//8-->left side-->merans two time multply 
//   cout<<(5>>3)<<endl;//0-->right side means divide upto 3 time 
//   return 0;
// }
//   /*
//   1
// 1
// 6
// -6
// 10
// 0*/
#include<iostream>
using namespace std;
int main(){
  int n;
  //int i=1;
  cin>>n;
  int sum=0;
  for(int i=1;i<=n;i++){
    //cout<<(sum)<<"";
    sum++;

   }
   cout<<sum<<endl;
   //i++;
}