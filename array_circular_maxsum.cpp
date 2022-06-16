#include<iostream>
#include<climits>
using namespace std;

int kadane(int A[],int n){
    int currsum = 0;
    int maxsum = INT_MIN;

    for(int i=0;i<n;i++){
        currsum+=A[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }

    return maxsum;

}

int main(){

    int i,A[20],n;
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    int wrapsum;
    int nonwrapsum = kadane(A,n);
    int totalsum=0;
    for(i=0;i<n;i++){
        totalsum += A[i];
        A[i] = -A[i];
    }

    wrapsum = totalsum + kadane(A,n);

    cout<<max(wrapsum,nonwrapsum);

    return 0;
}