
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string str,string output,int index,vector<string > &ans){
  //base case
  if(index>=str.size()){
    
  ans.push_back(output);
  return ;
}
  //exclude
  solve (str,output,index+1,ans);//means dont take
  
  //include
  
  char element=str[index];
  output.push_back(element);
  solve(str,output,index+1,ans);
}
vector<string> subsets(string& str) {
  vector<string> ans;//output store {}
  string output;
  int index=0;
  solve(str,output,index,ans);
  return ans;
} 
int main(){
  string str="abc";

    vector<string> ans = subsets(str);

    for(auto subset : ans)
    {
        cout << "[ ";

        for(auto x : subset)
        {
            cout << x << " ";
        }

        cout << "]" << endl;
    }


    
  return 0;
  
}