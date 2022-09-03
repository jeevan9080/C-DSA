#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int> &A,int n){

    int cs=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cs+=A[i];
        if(cs<0){
            cs=0;
        }
        maxsum=max(cs,maxsum);
    }
    return maxsum;
}

int main(){

    vector<int> A = {1,2,3,-2,5};
    int n=A.size();
    cout<<kadane(A,n);
    return 0;
}