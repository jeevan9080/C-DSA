#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m,i,j;
    cout<<"enter:";
    cin>>n>>m;
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        cin>>A[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}