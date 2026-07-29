//local scope means-->u can create a varaible only for inside a main or void function
/*ex-->{
    valuess
       }

*/

// #include<iostream>
// using namespace std;
//   int main(){
//     int a=7;
//     cout<<a<<endl;
//   }

//inter
#include<iostream>
using namespace std;

int x = 100;

int main()
{
    int x = 50;

    cout << x;
    cout<<::x<<endl;//print the global value then output is 100

    return 0;
}

//the output -->50
//Local variable gets higher priority than global variable.