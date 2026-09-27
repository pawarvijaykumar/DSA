#include<iostream>
#include <vector>
using namespace std;
void solve(int row, int col, vector<vector<int>>& maze,
  int n, vector<string>& ans, string path,vector<vector<int>>& visited){
    //BASE CASE
    /*
    "Agar rat maze ke last cell tak pahunch gaya hai, toh current path ko answer mein save karo aur recursion ko stop karo."

    Base case = recursion ko rokne wali condition.
    */
    if(row==n-1&&col==n-1){//reverse jajan hai toh
      ans.push_back(path);//path = "DDRDRR"
      return;
    }
    visited[row][col]=1;

    // Down
        if (row + 1 < n && maze[row + 1][col] == 1 &&
            visited[row + 1][col] == 0) {

            solve(row + 1, col, maze, n, ans, path + 'D', visited);
        }

        // Left
        if (col - 1 >= 0 && maze[row][col - 1] == 1 &&
            visited[row][col - 1] == 0) {

            solve(row, col - 1, maze, n, ans, path + 'L', visited);
        }

        // Right
        if (col + 1 < n && maze[row][col + 1] == 1 &&
            visited[row][col + 1] == 0) {

            solve(row, col + 1, maze, n, ans, path + 'R', visited);
        }

        // Up
        if (row - 1 >= 0 && maze[row - 1][col] == 1 &&
            visited[row - 1][col] == 0) {

            solve(row - 1, col, maze, n, ans, path + 'U', visited);
        }

        visited[row][col]=0;

  }
  vector<string> ratInMaze(vector<vector<int>>& maze, int n) {

  vector<string> ans;

  // If starting or ending cell is blocked
  if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    return ans;

  vector<vector<int>> visited(n, vector<int>(n, 0));

  solve(0, 0, maze, n, ans, "", visited);

  return ans;
}


int main() {

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}

        /*DDRDRR
          DRDDRR  for two way*/
    };

    int n = maze.size();

    

    vector<string> ans =ratInMaze(maze, n);

    // for (string path : ans) {
    //     cout << path << endl;
    // }
     
    int m=ans.size();
    for(int i=0;i<m;i++){
      cout<<"the rat move visited maze and unvisited maze \n"<<ans[i]<<endl;
    }
    cout<<endl;
    return 0;
}