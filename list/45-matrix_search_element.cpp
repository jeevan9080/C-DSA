#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=3,flag=0,k=3,A[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==k){
                cout<<"Found at row:"<<i+1<<" col:"<<j+1<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"Not Found"<<endl;
    }

    return 0;
}