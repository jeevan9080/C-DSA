#include<iostream>
#include<climits>
using namespace std;
int main(){

    int i,j,n,A[20];

    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>A[i];
    }   

    int minno=INT_MAX,maxno=INT_MIN;
    for(i=0;i<n;i++){
        maxno=max(maxno,A[i]);//
        minno=min(minno,A[i]);
    }

    cout<<maxno<<" "<<minno;

    return 0;
}