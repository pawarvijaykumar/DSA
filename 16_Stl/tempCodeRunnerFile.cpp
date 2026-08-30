#include<iostream>

#include<algorithm>
#include<vector>

using namespace std;
int main(){
  vector<int>v;

  v.push_back(2);
  v.push_back(6);
  v.push_back(3);
  v.push_back(26);
  v.push_back(28);
  v.push_back(28);
  //v.iterator=*it(5)

  auto it=find(v.begin(),v.end(),5);
  if(it !=v.end()){
    cout<<"found element"<<*it<<endl;

  }else{
    cout<<"found not element"<<*it<<endl;
    
  }

  cout<<" finding "<<binary_search(v.begin(),v.end(),28);
  cout<<endl;
  cout<<"count"<<count(v.begin(), v.end(),28);
  cout<<endl;
  cout<<"max"<<*max_element(v.begin(), v.end());
  cout<<endl;
  cout<<"min"<<*min_element(v.begin(), v.end());


  
  
  return 0;
}