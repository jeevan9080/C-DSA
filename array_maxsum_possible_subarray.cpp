#include<iostream>
#include<climits>
using namespace std;
int main(){

    int A[20],n,i,j,k;
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    int maxsum=INT_MIN;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=A[k];
            }
            maxsum=max(maxsum,sum);
        }
    }

    cout<<maxsum<<endl;

    return 0;
}