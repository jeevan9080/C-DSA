#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=3,A[n][n]={{1,2,3},{1,0,1},{1,1,1}};
    int ones=0,max=0,ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==1){
                ones++;
            }
                if(ones>max){
                    max=ones;
                    ans=i;
                }
            }
            ones=0;
        
    }
    cout<<ans<<endl;
    return 0;
}