#include<bits/stdc++.h>
using namespace std;


/*
1 2 3
4 5 6
7 8 9
*/

int main(){

    int n=3,A[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    
    int row_start=0,row_end=n-1,col_start=0,col_end=n-1,col,row;

    while(row_start<=row_end && col_start<=col_end){
        for(col=col_start;col<=col_end;col++){
            cout<<A[row_start][col]<<" ";
        }
        row_start++;
        for(row=row_start;row<=row_end;row++){
            cout<<A[row][col_end]<<" ";
        }
        col_end--;
        for(col=col_end;col>=col_start;col--){
            cout<<A[row_end][col]<<" ";
        }
        row_end--;
        for(row=row_end;row>=row_start;row--){
            cout<<A[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}