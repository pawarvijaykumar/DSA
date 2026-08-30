//  Unique elements in sorted order ex--5,5,5,5,5-->5 only one
//  SET = UNIQUE + SORTED

#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int>s;
  s.insert(3);
  s.insert(4);
  s.insert(3);
  s.insert(6);
  s.insert(0);
  s.insert(4);
  s.insert(6);
  s.insert(9);

  for(int i:s){
    cout<<i<<" ";//endl;
  }
  
  for(int i:s){
    cout << s.size()<<endl;
  }
  return 0;
}