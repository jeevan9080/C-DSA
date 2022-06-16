#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

void primesieve(int n){
    int i,j;
    int prime[100]={0};

    for(i=2;i<=n;i++){
        if(prime[i]==0){
            for(j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    for(i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter:";
    cin>>n;

    primesieve(n);
    return 0;
}