#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &A1,vector<int> &A2,int A3[],int n1,int n2,int n){

    int i=0,j=0,k=0;
    while(i<n1){
        A3[k++]=A1[i++];
    }
    while(j<n2){
        A3[k++]=A2[j++];
    }
    sort(A3,A3+n);
}


int main(){

    vector<int> A1 = {1,3,54,7,8};
    vector<int> A2 = {2,3,55,6,77};

    int n1=A1.size(),n2=A2.size();
    int n=n1+n2;
    int A3[n];
    merge(A1,A2,A3,n1,n2,n);

    for(int i=0;i<n;i++){
        cout<<A3[i]<<" ";
    }
    return 0;
}