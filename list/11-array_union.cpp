#include<bits/stdc++.h>
using namespace std;

void Aunion(int A1[],int A2[],int n,int m){

    int i=0,j=0,count=0;
    while(i<n && j<m){
        if(A1[i]<A2[j]){
            cout<<A1[i++]<<" ";
            count++;
        }
        else if(A1[i]>A2[j]){
            cout<<A2[j++]<<" ";
            count++;
        }
        else{
            cout<<A2[j++]<<" ";
            i++;
            count++;
        }
    }
    while(i<n){
        cout<<A1[i++]<<" ";
        count++;
    }
    while(j<m){
        cout<<A2[j++]<<" ";
        count++;
    }

    cout<<endl<<count<<endl;
}

int main(){

    int A1[]={85,25,1,32,54,6};
    int A2[]={85,2};
    int n=sizeof(A1)/sizeof(A1[0]);
    int m=sizeof(A2)/sizeof(A2[0]);

    Aunion(A1,A2,n,m);
    return 0;
}