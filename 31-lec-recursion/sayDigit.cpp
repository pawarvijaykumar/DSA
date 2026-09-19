#include<iostream>
using namespace std;
void saydigit(int n ,string arr[]){
  if(n==0){
    return ;
  }
  int digit=n%10;/*123 % 10 = 3
12 % 10  = 2
1 % 10   = 1*/
  n=n/10;

  saydigit(n,arr);
  cout<<arr[digit]<<" ";

}
int main(){
  string arr[10]={"Zero","One","Two","Three","Four","Five","Six", "Seve","Eight","Nine"};
  int n=123;
  saydigit(n,arr);
  //cout<<index<<endl;
  
  return 0;
}