#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& A){
    sort(A.begin(),A.end());
}


int main(){

vector<int> A={-22,-5,9,11,-3};
int n=sizeof(A)/sizeof(A[0]);
move(A);
for(int i:A){
    cout<<i<<" ";
}
return 0;
}