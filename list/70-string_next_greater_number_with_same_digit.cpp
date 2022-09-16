#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void findNextGreat(vector<int> &A,int n){

    int i,j;
    for(i=n-1;i>0;i--){
        if(A[i]>A[i-1]){
            break;
        }
    }

    if(i==0){
        cout<<"No possible outcome"<<endl;
        return;
    }

    int x=A[i-1],smallest=i;
    for(j=i+1;j<n;j++){
        while(A[j]>x && A[j]<A[smallest]){
            smallest=j;
        }
    }

    swap(&A[smallest],&A[i-1]);

    sort(A.begin()+i,A.end());
    
    for(int k=0;k<n;k++){
        cout<<A[k];
    }
} 

int main(){

    vector<int> A={5,3,4,9,7,6};
    int n=A.size();
    findNextGreat(A,n);
    return 0;
}