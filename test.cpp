#include<iostream>
using namespace std;

void sort(int n){
    
    int A[20],i;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int counter=1;
    while(counter<n){
        for(i=0;i<n-counter;i++){
            if(A[i+1]<A[i]){
                int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
    }
    counter++;
    }

    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

}

int main(){

    int n=5;
    sort(n);
    return 0;
}