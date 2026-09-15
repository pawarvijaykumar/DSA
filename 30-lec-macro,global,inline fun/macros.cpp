#include<iostream>
using namespace std;


//A macro is a name that represents some value or piece of code
# define PI 3.21//isme ; nahi aata hai 
# define LIMIT 7
int main(){
  int n=5;

  cout<<PI*n*n<<endl;
  cout<<" so my age id "<<LIMIT<<endl;
  printf("locdown will be extend %d \n ",LIMIT);
  
  return 0;
}