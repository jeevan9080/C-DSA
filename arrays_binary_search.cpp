#include<iostream> //8.2
using namespace std;

int binarysearch(int A[],int n,int key){

    int mid,s=0,e=n-1;

    while(s<=e){
    mid = (s+e)/2;

    if(key==A[mid]){
        return mid;
    }
    else if(key<A[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    return -1;
}


int main(){

    int n,A[20],i,key;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Enter the number to search : ";
    cin>>key;

    cout<<binarysearch(A,n,key)<<endl;
    
    return 0;
}