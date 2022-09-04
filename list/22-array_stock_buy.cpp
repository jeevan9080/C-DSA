#include<bits/stdc++.h>
using namespace std;

int bestprice(vector<int> &A,int n){

    int buy=A[0],max=0;
    for(int i=1;i<n;i++){

        if(buy>A[i]){
            buy=A[i];
        }
        else if(A[i]-buy>max){
            max=A[i]-buy;
        }
    }
    return max;
}

int main(){

    vector<int> A = {7,6,4,3,2,1};
    int n=A.size();
    cout<<bestprice(A,n);
    return 0;
}