#include<iostream>
#include<climits>
using namespace std;
int main(){

    int i,A[20],n;
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    int currsum=0;
    int maxsum=INT_MIN;
    for(i=0;i<n;i++){
        currsum += A[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }

    cout<<maxsum<<endl;

    return 0;
}