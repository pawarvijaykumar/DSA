#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b) {

    while(b != 0) {

        int rem = a % b;

        a = b;
        b = rem;
    }

    return a;
}

vector<string> simplifiedFractions(int n) {
  vector<string>ans;
 
  for(int i=2; i<=n;i++) {

    for(int j= 1;j<i;j++){ 
      if(gcd(i, j) == 1){
        ans.push_back(to_string(j)+"/"+ to_string(i));

      }



        
    }
  }
  return ans ;
}  
int main(){
  int n=3;
   vector<string>ans= simplifiedFractions( n);
   for(string x : ans) {
        cout << x << " ";
    }

 

  
  return 0;
}