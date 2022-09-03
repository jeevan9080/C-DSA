#include<bits/stdc++.h>
using namespace std;

int pairs(vector<int> &A,int n,int sum){

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sum==A[i]+A[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){

    vector<int> A = {1,5,7,-1,5};
    int sum=6;
    int n=A.size();

    cout<<pairs(A,n,sum); 
    return 0;
}