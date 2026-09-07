#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



void rotate(vector<vector<int>>& matrix) {
        int row=0;
        int col=0;
        //vector<int>ans;
        //int Count=0;
        //int total=row*col;
        int n=matrix.size();
        //while(Count<total){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap (matrix[i][j],matrix[j][i]);
                //Count++;
                  

            }
        }
        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
            
        }
        //return ans;
    }

    
    
    
int main(){
    vector<vector<int>>matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
                         
    rotate(matrix);
     for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


        
    return 0;
    }