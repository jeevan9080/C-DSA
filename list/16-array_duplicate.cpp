#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> A = {1,2,3,3,4,5};
    int n=A.size();

    sort(A.begin(),A.end());

    for(int i=0;i<n;i++){
        if(A[i]==A[i+1]){
            cout<<A[i]<<endl;
            break;
        }
    }

    return 0;
   
}