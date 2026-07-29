#include <iostream>
using namespace std;

int main()
{
  //int i, j;
  //   for(int i=5;i>=1;i--){

  //     for(int j=1;j<=i;j++){
  //       cout<<"*";
  //     }
  //     cout<<endl;
  //   }
  //   return 0;

  //}
  /*
   ****
   ***
   **
   * */
  // reverse pattern
  //   for(int i=1;i<=5;i++){

  //     for(int j=1;j<=i;j++){
  //       cout<<"*";
  //     }
  //     cout<<endl;
  //     }
  //     return 0;

  // }
  /*
   *
   **
   ***
   ****
   *****
   */

  // use while loop
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//       int j = 1;
//       while (j <= n)
//       {
//         cout << "*";
//         j++;
//       }
//       cout << endl;
//       i++;
//     }
//     return 0;
//   }
// 5
// *****
// *****
// *****
// *****
// *****
//   int n;
//   int i=1;
//   cin>>n;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<j;
//       j++  ;

//     }
//     cout<<endl;
//     i++;
//   }
//   return 0;
// }
/*
4
1234
1234
1234
1234*/

//if i need reverse thr change a cout<<j insted of cout<n-j+1

//   int n;
//   cin>>n;
//   int row=1;

//   while(row<=n){
//     int col=1;

//     while(col<=row){
//       cout<<row-col+1<<"";//new pattern-->i-j+1 or i+j-1
//       col++;

//     }
//     cout<<endl;
//     row++;
//   }
// }
/*
5
1
21
321
4321
54321
*/

//   int n;
//   int i=1;
//   cin>>n;
//   char A ;
 
//   while(i<=5){
//     int j=1;
//     while(j<=n){
//       char ch='A'+j-1;
//       cout<<ch;
//       j++;
//     }
//     cout<<endl;
//     i++;

//   }
// }
/*
5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE*/

//   int n;
//   int i=1;
//   cin>>n;
//   char ch ='A';
 
//   while(i<=5){
//     int j=1;
//     while(j<=n){
      
//       cout<<ch<<"";
//       ch++;
//       j++;
//     }
//     cout<<endl;
//     i++;

//   }
// } 
// /*
// 5
// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY*/

  int n;
  
  cin>>n;
  int row=1;
  
  while(row<=n){
    int col=1;
    char start='A'+n-row;
    while(col<=row){
      
      
      cout<<start;
      start++;
      col++;
    }
    cout<<endl;
    row++;

  }
} 
/*
E
DE
CDE
BCDE
ABCD
*/