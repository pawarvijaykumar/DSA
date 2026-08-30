



//A deque allows you to insert and delete elements from both the front and the back.#include<iostream>

#include <deque>

using namespace std;


int main() {

    deque<int> d;

    d.push_back(10);
    d.push_front(20);


    
    //cout<<"the deque is"<<endl;
    
    cout<<d[1]<<endl;
    cout<<d[2]<<endl;

  cout<<"print the fisrt index \n"<<d.at(1)<<endl;
  cout<<"front"<<d.front()<<endl;
  cout<<"back"<<d.back()<<endl;


  //check the true or false no?
  //cout<<"Empty"<<d.Empty()<<endl;
  d.erase(d.begin(),d.begin()+1);//=1 means 1st index
  d.clear();
  cout<<"clear"<<endl;

  for(int i:d){
    cout<<i<<endl;
  }
    return 0;
}