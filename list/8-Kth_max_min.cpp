#include<bits/stdc++.h>
using namespace std;

void Asort(vector<int> &A,int n){

    sort(A.begin(),A.end());
}

int main(){

    vector<int> A = {7,10,4,20,15};
    int n=A.size();
    int K=4;
    Asort(A,n);
    cout<<A[K-1]<<endl;
    
    return 0;
}