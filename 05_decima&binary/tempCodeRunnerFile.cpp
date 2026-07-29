#include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=0;
//   int ans=0;
//   int place=1;        // ✅ replaces pow(10,i) — stays integer
//   while(n != 0){
//     int bit = n & 1;
//     ans = (bit * place) + ans;  // ✅ no floating point
//     n=n>>1;
//     i++;
//     place = place * 10;        // ✅ multiply by 10 each iteration
//   }
//   cout<<"ANS is "<<ans<<endl;
// }