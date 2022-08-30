#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &A,int n){

    sort(A.begin(),A.end());

    for(int i:A){
        cout<<i<<" ";
    }
}

int main(){

    vector<int> A = {1,-2,3,4,-5};
    int n=A.size();

    rev(A,n);

    return 0;
}