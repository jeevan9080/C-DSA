#include<iostream>
using namespace std;

int firstocc(int A[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    
    if(A[i]==key){
        return i;
    }
    
    return firstocc(A,n,i+1,key);
}

int lastocc(int A[],int n,int i,int key){
    
    if(i==n){
        return -1;
    }
    
    int restarr = lastocc(A,n,i+1,key);
    
    if(restarr != -1){
        return restarr;
    }
    
    if(A[i]==key){
        return i;
    }
    
    return -1;
}

int main(){
    int A[]={4,2,1,2,5,2,7},n=7,key=2,i=0;
    cout<<firstocc(A,n,i,key)<<" ";
    cout<<lastocc(A,n,i,key);
}