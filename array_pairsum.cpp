#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int A[],int n,int k){
    
    int low=0,high=n-1;
    while(low<high){
        if(A[low]+A[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(A[low]+A[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){

    int k,A[]={1,2,7,11,14,16,20,21},n=8;
    cout<<"Enter : ";
    cin>>k;

    pairsum(A,n,k);
    

    return 0;
}