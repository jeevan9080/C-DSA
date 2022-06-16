#include<iostream>
using namespace std;

bool sorted(int A[],int n){
    
    if(n==1){
        return true;
    }
    
    int restarray = sorted(A+1,n-1);
    return (A[0]<A[1] && restarray);
}

int main(){
    int A[]={1,0,3,4,5},n=5;
    cout<<sorted(A,n);
    return 0;
}