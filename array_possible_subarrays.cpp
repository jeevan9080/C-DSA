#include<iostream>
#include<climits>
using namespace std;
int main(){

    int A[20],n,i,j,k;
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<A[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}