#include<bits/stdc++.h>
using namespace std;

void findcommon(vector<int> &A1,vector<int> &A2,vector<int> &A3,int n1,int n2,int n3){

    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(A1[i]==A2[j] && A2[j]==A3[k]){
            cout<<A1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(A1[i]<A2[j]){
            i++;
        }
        else if(A2[j]<A3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main(){

    vector<int> A1={1,5,10,20,40,80};
    vector<int> A2={6,7,20,80,100};
    vector<int> A3={3,4,15,20,30,70,80,120};

    int n1=A1.size(),n2=A2.size(),n3=A3.size();

    findcommon(A1,A2,A3,n1,n2,n3);

    return 0;
}