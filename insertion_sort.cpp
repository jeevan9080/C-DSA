#include<iostream>
using namespace std;
int main(){

    int n,i,j,A[20],current;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    for(i=1;i<n;i++){
        current = A[i];
        j = i-1;
        while(A[j]>current && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = current;
    }

    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}