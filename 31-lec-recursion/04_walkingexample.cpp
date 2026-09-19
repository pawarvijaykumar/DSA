#include<iostream>
using namespace std;
  void reachHome(int src,int dest){

  cout<<"src start"<<src<<"last"<<dest<<endl;
  if(src==dest){
    cout<<"its rechedd"<<endl;
    return ;

  }
  src++;
  reachHome(src,dest);
}
int main(){
  int src=1;
  int dest=10;
  reachHome(src,dest);
  
  return 0;
}