#include<iostream> //10
#include<climits>
using namespace std;
int main(){

    int n;
    cin>>n;

    char A[n+1];
    cin>>A;
    bool check = true;

    for(int i=0;i<n;i++){
        if(A[i]!=A[n-1-i]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}