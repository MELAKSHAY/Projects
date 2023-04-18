#include<iostream>
#include<cmath>
using namespace std;


bool possible(int board[][100], int n, int i, int j,int v){
    for(int k=0; k<n; k++){
        if(board[i][k]==v) return false;

    }
    for(int k=0; k<n; k++){
        if(board[k][j]==v) return false;
    }
    int a=sqrt(n);
    int sr= i-i%(a); int er=sr+a-1;
    int sc= j-j%(a); int ec=sc+a-1;
 for(int row=sr; row<=er; row++){
    for(int col=sc; col<=ec; col++){
        if(board[row][col]==v) return false;
    }
    }
    
     return true;
}

void print(int board[][100], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        } cout<<endl;
    }
}


bool sudoku_s(int board[][100], int n, int i=0, int j=0){
    //base case
    if(i==n){
        print(board,n);
        return true;
    }
     if(j==n){
        return sudoku_s(board, n,i+1,0);
    }
    // recursion
   
    if(board[i][j]!=0) 
    return sudoku_s(board, n, i, j+1);

    for(int v=1; v<=n; v++){
        if(possible(board,n,i,j,v)){
        board[i][j]=v;

        if(sudoku_s(board, n, i, j+1)){
        return true;   
        }
        board[i][j]=0;
        }
        
    }
    return false;



}
int main(){
    // int board[100][100] ={
	// 	{5,3,0,0,7,0,0,0,0},
	// 	{6,0,0,1,9,5,0,0,0},
	// 	{0,9,8,0,0,0,0,6,0},
	// 	{8,0,0,0,6,0,0,0,3},
	// 	{4,0,0,8,0,3,0,0,1},
	// 	{7,0,0,0,2,0,0,0,6},
	// 	{0,6,0,0,0,0,2,8,0},
	// 	{0,0,0,4,1,9,0,0,5},
	// 	{0,0,0,0,8,0,0,7,9}};
    int board[100][100]={0};
    int n=4;

    sudoku_s(board,n);





    return 0;
}