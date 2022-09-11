#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> A = {1,2,3,4,5};
    int maxno=INT_MIN,minno=INT_MAX;

    for(int i=0;i<A.size();i++){
        maxno=max(maxno,A[i]);
        minno=min(minno,A[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
}