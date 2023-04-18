#include<iostream>
using namespace std;
int count=0;
void tower_hanoi(int n,int s, int t, int h){
    if(n==0) return ;
    tower_hanoi(n-1,s,h,t); 
    count++; cout<<s<<"-"<<t<<" "; 
    tower_hanoi(n-1,h,t,s);// tower_hanoi(n-1)+1+tower_hanoi(n-1);
}
int main(){
    int n=3;
   tower_hanoi(n,1,3,2);
   cout<<endl;
   cout<<count;
    return 0;
}