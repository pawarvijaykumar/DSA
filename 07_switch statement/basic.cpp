// #include<iostream>

// using namespace std;
// int main(){
//   int num=1;
//   //int num;
//   //cin>>num;
//   switch(num){
//     case 1:cout<<"vijay"<<endl;
//     //break;
//     //continue;
//     case 2:cout<<"pawar"<<endl;
//     break;//if i nnot a write break statement then print the default statement
//     default:cout<<"this is a not name"<<endl;//default means thie two value not include then this statement print automatically
//   }
// }

// //calculator method
// #include<iostream>

// using namespace std;
// int main(){
//   int a=3;
//   int b=4;
//   int sum=a*b;
//   int sum1=a+b;
//   int num=2;
//   //int sum=1;
//   switch(num){
//     case 1:cout<<sum<<endl;
//     break;
//     case 2:cout<<sum1<<endl;
//     default:cout<<"not sum and sum1"<<endl;
//   }
// }


#include<iostream>

using namespace std;
int main(){
  
    int amount;
    cout<<"Enter the Amount : "<<endl;
    cin>>amount;

    int num = 1;
    int note = 0;
    switch (num){
        case 1: {
            note = amount/100;
            amount = amount - (100 * note);
            cout<<note<<" Rs.100 note requied."<<endl;
        }
        case 2:{
            note = amount/50;
            amount = amount - (50 * note);
            cout<<note<<" Rs.50 note requied."<<endl;
        }
        case 3:{
            note = amount/20;
            amount = amount - (20 * note);
            cout<<note<<" Rs.20 note requied."<<endl;
        }
        case 4:{
            note = amount/1;
            amount = amount - (1 * note);
            cout<<note<<" Rs.1 note requied."<<endl;
        }
    }
}