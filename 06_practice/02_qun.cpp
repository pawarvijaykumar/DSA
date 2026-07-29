// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   if(n > 0 && (n & (n - 1)) == 0){
//     cout<<"true";

//   }else {
//     cout<<"false";
//   }

// }

//now i print 1 to 100 number pow digit number

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int n;
//   for(int n=1;n<100;n++){
//     if(n > 0 && (n & (n - 1)) == 0){

//       cout<<n<<endl;
//     }

//   }
// }
/*
1
2
4
8
16
32
64
*/

//3)Check Even or Odd using Bitwise Operator
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n%2==0){
    cout<<"true";

  }else{
    cout<<"false";

  }
}
