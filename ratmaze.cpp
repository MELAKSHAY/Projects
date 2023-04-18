#include<iostream>
using namespace std;
bool print(char arr[][4], int i=0,int j=0){
    if(i==3 and j==3)
    {
        arr[i][j]='1';
        for(int i=0; i<4 ; i++){
            for(int j=0; j<4; j++)
            cout<<arr[i][j]<<" ";
            
            cout<<endl;
        }
        cout<<endl<<endl;   
        return true;
    }
    
    if(i<3 and arr[i+1][j]!='x')
    {arr[i][j]='1'; 
    print(arr, i+1, j);
    arr[i][j]='0';}

    if(j<3 and arr[i][j+1]!='x'){
        arr[i][j]='1';
    print(arr, i,j+1);
    arr[i][j]='0'; 
    } 
    

    }
int main(){
    char arr[4][4]={{'0','0','0','0'},
    {'0','0','x','x'},{'0','0','0','0'},{'x','x','0','0'}
    };
    
    cout<<print(arr);







    return 0;
}