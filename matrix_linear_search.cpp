#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m,i,j,x,flag=0;
    cout<<"enter:";
    cin>>n>>m;  
    int A[n][m];
    cout<<"elements:";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        cin>>A[i][j];
        }
    }
    cout<<"search:";
    cin>>x;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]==x){
                cout<<"Found";
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"Not Found";
    }
    return 0;
}