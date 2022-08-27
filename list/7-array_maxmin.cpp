#include<bits/stdc++.h>
using namespace std;

void reverse(int A[],int n){
    int maxno=INT_MIN,minno=INT_MAX;
    for(int i=0;i<n;i++){
        maxno=max(maxno,A[i]);
        minno=min(minno,A[i]);
    }
    cout<<maxno<<" "<<minno;
}


int main(){

int A[]={1,2,3,4,5};
int n=sizeof(A)/sizeof(A[0]);
reverse(A,n);
return 0;
}