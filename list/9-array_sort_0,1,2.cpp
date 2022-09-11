#include<bits/stdc++.h>
using namespace std;

void Asort(vector<int> &A,int n){

    sort(A.begin(),A.end());
}

int main(){

    vector<int> A = {0,1,2,2,1,1,0,0};
    int n=A.size();
    Asort(A,n);

    for(int i:A){
        cout<<i<<" ";
    }

    
    return 0;
}