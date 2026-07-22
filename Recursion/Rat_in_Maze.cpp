#include<iostream>
using namespace std;
#include<vector>
bool solve(vector<vector<int>> &maze,vector<vector<bool>> &visited,int row,int col,int n,string path) {
    if (row == n-1 && col == n-1) {
        ans.push_back(path);
        return true;
    }
    visited[row][col] = true;
    if (row + 1 < n &&
            maze[row + 1][col] == 1 &&
            !visited[row + 1][col])
    {
        solve(row + 1, col, maze, n, path + 'D', visited);
    }
    if (col - 1 >= 0 &&
            maze[row][col - 1] == 1 &&
            !visited[row][col - 1])
    {
        solve(row, col - 1, maze, n, path + 'L', visited);
    }
    if (col + 1 < n &&
            maze[row][col + 1] == 1 &&
            !visited[row][col + 1])
    {
        solve(row, col + 1, maze, n, path + 'R', visited);
    }
    if (row - 1 >= 0 &&
                maze[row - 1][col] == 1 &&
                !visited[row - 1][col])
    {
        solve(row - 1, col, maze, n, path + 'U', visited);
    }
    visited[row][col] = false;
}