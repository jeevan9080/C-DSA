#include<bits/stdc++.h>
using namespace std;

void rotate(int A[],int n){

    int x=A[n-1];
    for(int i=n-1;i>0;i--){
        A[i]=A[i-1];
    }
    A[0]=x;

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){

    int A[]={85,25,1,32,54,6};
    int n=sizeof(A)/sizeof(A[0]);

    rotate(A,n);
    return 0;
}