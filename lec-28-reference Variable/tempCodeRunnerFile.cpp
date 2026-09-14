
//ref-->same memory call diffrence name called

#include<iostream>




void update2(int& n){//its also called as pass by value or reference
  n++;//6 becuse ref
}
void update(int n){//this value create same value did not create new just copy ,when i write reference vale then after shown new value &
  n++;

}
using namespace std;
int main(){
  int i=4;
  int ref=i;
  i++;

  cout<<i<<endl;
  ref++;
  cout<<ref<<endl;
  int n=9;
  cout<<"before\n"<<n<<endl;
  update2(n);
  cout<<"after\n"<<n<<endl;
  update(n);
  cout<<"after\n"<<&n<<endl;
  return 0;
}