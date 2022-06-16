#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

void primefactor(int n){
    int spf[100]={0};
    int i,j;

    for(i=2;i<=n;i++){
        spf[i]=i;
    }

    for(i=2;i<=n;i++){
        if(spf[i]==i){
            for(j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main(){

    int n;
    cout<<"Enter:";
    cin>>n;

    primefactor(n);
    return 0;
}