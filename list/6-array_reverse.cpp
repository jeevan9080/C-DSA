#include<bits/stdc++.h>
using namespace std;

void reverse(int A[],int n){
    int start=0,end=n-1;
    while(start<end){
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}


int main(){

int A[]={1,2,3,4,5};
int n=sizeof(A)/sizeof(A[0]);
reverse(A,n);
return 0;
}