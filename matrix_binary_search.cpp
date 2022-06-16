#include<iostream>
#include<climits>
using namespace std;
int main(){

    int i,j,n,m,k;
    cout<<"Enter:";
    cin>>n>>m>>k;
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

    int r=0,c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(A[r][c]==k){
            found=true;
            break;
        }
        else if(A[r][c]>k){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"not Found";
    }
    return 0;
}