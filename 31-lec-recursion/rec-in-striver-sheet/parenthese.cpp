
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void solve(int n,int open,int close,string output,vector<string>&ans){
        //base case
        if(output.size()==2*n){
            ans.push_back(output);
            return;

        }
        //add opnimg bracket
        if(open<n){
            solve(n,open+1,close,output+'(',ans);
        }
        if(close<open){
            solve(n,open,close+1,output+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(n,0,0,"",ans);
        return ans;

        // time complexity -->4^n / n^(3/2)
    }
int main() {

    int n = 3;

    vector<string> ans;

    solve(n, 0, 0, "", ans);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}