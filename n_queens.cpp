#include<iostream>
using namespace std;
void print(char arr[][100], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           
            if(!arr[i][j]) cout<<"&  ";
            else cout<<arr[i][j]<<"  ";
        } cout<<endl;
    }
    cout<<endl;
}
bool possible(char arr[][100], int n, int i, int j){
    for(int i=0 ; i<n; i++){
        if(arr[i][j]=='Q') return false;
    }
    int a=i; int b=j;
    while(i>-1 and (j>-1 and j<n)){
                if(arr[i--][j--]=='Q') return false;

    }
    i =a; j=b;
    while(i>-1 and (j>-1 and j<n)){
                if(arr[i--][j++]=='Q') return false;

    }
    return true;
}
bool queens_set(char (*board)[100], int n, int i=0){

    if(i==n){
        print(board, n);
        return false;
    }
    
    for(int j=0; j<n; j++){
         if(possible(board,n, i, j)){
        board[i][j]='Q';
        if(queens_set(board,n,i+1))
        return true;
       board[i][j]=0;

       }

       
    }
        return false;
}
     


int main(){
    int n;
    cin>>n;
    char board[100][100]={""};
    
    queens_set(board,n);
   




    return 0;
}