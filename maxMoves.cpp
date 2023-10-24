#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>>grid, int i, int j, int &number, int m,int n,int temp){
    //In this function we have used temp variable for comparing current steps with number
    number = max(number,temp);
    
    temp++;

    //we are looking for all the three possible cells if we can move there or not 

    if(i-1>=0 && j+1<n && grid[i-1][j+1]>grid[i][j]){
        helper(grid,i-1,j+1,number,m,n,temp);
    }

    if(j+1<n && grid[i][j+1]>grid[i][j]){
        helper(grid,i,j+1,number,m,n,temp);
    }

    if(i+1<m && j+1<n && grid[i+1][j+1]>grid[i][j]){
        helper(grid,i+1,j+1,number,m,n,temp);
    }

    temp--;
    return;
}

int maxMoves(vector<vector<int>> grid){
    int m  = grid.size();   // number of rows
    int n = grid[0].size(); // number pf columns
    int number = 0;         // number of ways    

    // iterating through first column and calling another function
    for(int i=0;i<m;i++){   
        helper(grid,i,0,number,m,n,0);  
    }
    return number;
}



int main(){
    vector<vector<int>>grid;
    grid.push_back({2,4,3,5});
    grid.push_back({5,4,9,3});
    grid.push_back({3,4,2,11});
    grid.push_back({10,9,13,15});
    
    cout<<maxMoves(grid)<<endl;
}
