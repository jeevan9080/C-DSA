#include<bits/stdc++.h>
using namespace std;

void Asort(vector<int> &A,int n){

    sort(A.begin(),A.end());
}

int main(){

    vector<int> A = {22,-1,-33,-22,55,4};
    int n=A.size();
    Asort(A,n);

    for(int i:A){
        cout<<i<<" ";
    }

    
    return 0;
}