
#include<iostream>
#include <list>

using namespace std;


int main() {

    list<int> l;

    l.push_back(10);
    l.push_front(20);


    
    //cout<<"the deque is"<<endl;
    
    auto it=l.begin();
    cout<<*it<<endl;
  cout<<"print the fisrt index \n"<<*it<<endl;
  cout<<"front"<<l.front()<<endl;
  cout<<"back"<<l.back()<<endl;


  //check the true or false no?
  //cout<<"Empty"<<d.Empty()<<endl;
  return 0;
}