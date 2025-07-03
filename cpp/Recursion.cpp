#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<string> &board,int row,int col,int n){
    // Check in row for different columns i.e Horizontally
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }

    // Check in column for different rows i.e. Vertically
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    // Check for Left Diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    // Check for Right Diagonal
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;

}
void nQueen(vector<string> &board,vector<vector<string>> &ans, int n,int row){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe(board,row, i,n)){
            board[row][i]='Q';
            nQueen(board,ans,n,row+1);
            board[row][i]='.';
        }
    }
}
int  main(){
    int n=4;
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    int row=0;
    nQueen(board,ans,n,row);

    for(const auto &val:ans){
        for(const string &v: val){
            cout<<v<<endl;
        }
        cout<<endl;
    }
    return 0;
}