#include<iostream>
using namespace std;

int main(){

    int A[20],n,i,j,temp;
    cout<<"Enter the no.of elements : ";
    cin>>n;
    cout<<"Elements : ";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"After sorting:";
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(A[j]<A[i]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
        
    }
    return 0;
}