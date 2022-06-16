#include<iostream>
#include<climits>  //8.5  1 5 3 4 3 5 6
using namespace std;
int main(){

    int n,i,A[20];
    cout<<"Enter:";
    cin>>n;
    cout<<"Elements:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    int idx[20];
    for(i=0;i<n;i++){
        idx[i] = -1;
    }

    int minno=INT_MAX;
    for(i=0;i<n;i++){
        if(idx[A[i]] != -1){
            minno = min(minno,idx[A[i]]);
        }
        else{
            idx[A[i]] = i;
        }
    }

    if(minno == INT_MIN){
        cout<<"-1";
    }
    else{
        cout<<minno + 1<<endl;
    }
    

    return 0;
}