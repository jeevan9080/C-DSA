#include<bits/stdc++.h>
using namespace std;

int sol(vector<int> pp,vector<int> bp,int n,int m,int pm){
    
    int count=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+pp[i]+bp[i];
        if(sum<pm){
            count++;
        }
    }
    return count;
}

int main(){
    
    vector<int> pp = {4,1,4,5,3};
    vector<int> bp = {8,8,10,9,12};
    int n=pp.size(),m=bp.size(),pm=33;
    cout<<sol(pp,bp,n,m,pm);
    return 0;
}