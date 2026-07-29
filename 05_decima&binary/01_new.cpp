// #include<iostream>
// #include<math.h>
// using namespace std;
//   int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     int ans=0;
//     //int pow=1;
//     //int bit=1;
//     while(n  !=0){
//       int bit = n & 1;
//       ans = (bit *10^i) + ans;
//       n=n>>1;
//       i++;
//       //pow=pow*10;
//     }
//     cout<<"ANS is "<<ans<<endl;
//   }

/*

they have one range for (2^31,-2^31 -1) then u write above 100000000   then infinity values 
binary
0 0  0 0
1 0  0 1
20  1 0
30 1 1
4 1 0 0
5 1  0 1
 1  1 0
 1  1 1  

 if u get binary bun then use right and left side function
 and if u get decimal then use n%10 and n/10
*/

//deciaml to binary for nagitive number
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int num;
//   cin>>num;
//   //int i=0;
//   int ans=0;
//   int n=abs(num);
//   int place=1;        // ✅ replaces pow(10,i) — stays integer
//   while(n != 0){
//     int bit = n & 1;
//     ans = (bit * place) + ans;  // ✅ no floating point
//     n=n<<1;
//     //i++;
//     place = place * 10;        // ✅ multiply by 10 each iteration
//   }
//   if(num<0){
//     cout<<"-";
//   }
//   cout<<ans<<endl;
// }


//binary to decimal

#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n; 
  cin>>n;
  int ans=0;
  int i=0;
  //int digit=1;
  while(n  !=0){
    int digit=n%10;//1
    if(digit==1){

    ans=pow(2,i)+ans;//1
    
    }
    n=n/10;//10
    
      //not >>becuse  not get the decimal value that wise use the % 
    i++;
  }
  cout<<ans<<"";

}


