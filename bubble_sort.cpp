#include<iostream>
using namespace std;

int main(){

    int n,i,temp,A[20];
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>A[i];
    }


    int counter=1;
    while(counter<n){
        for(i=0;i<n-counter;i++){

            if(A[i+1]<A[i]){
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
           counter++;
        
      }
           for(i=0;i<n;i++){
               cout<<A[i]<<" ";
           }
    return 0;
}