    #include<iostream>
    using namespace std;
    void perm(char *arr,int i=0){
         
        if(!arr[i]){
            cout<<arr<<endl;
            return;
        }
        for(int k=i; arr[k]; k++){
            swap(arr[k],arr[i]);
            perm(arr,i+1);
            swap(arr[k],arr[i]);
            
        }
    }
    int main(){
        char arr[]="abc";
        perm(arr);





        return 0;
    }