#include<iostream>
#include<climits>  //8.5  5 12    1 2 3 7 5
using namespace std;
int main(){

    int n,A[20],s;
    cout<<"Enter:";
    cin>>n>>s;
    cout<<"Elements:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int i=0 , j=0 , st=-1 , en=-1 , sum=0;
    while(j<n && sum+A[j]<=s){
        sum += A[j];
        j++;
    }

    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum += A[j];
        while(sum>s){
            sum -= A[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;
    

    return 0;
}