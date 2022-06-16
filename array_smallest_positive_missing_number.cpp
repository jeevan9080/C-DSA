#include<iostream>
#include<climits>
using namespace std;
int main(){

    int A[20],n,i;
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    bool check[20];
    for(i=0;i<n;i++){
        check[i] = false;
    }

    for(i=0;i<n;i++){
        if(A[i]>=0){
            check[A[i]]=true;
        }
    }

    int ans=-1;
    for(i=0;i<n;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}