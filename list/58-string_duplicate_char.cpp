#include<bits/stdc++.h>
using namespace std;

void check(string s){

    string p=s;
    sort(p.begin(),p.end());
    for(int i=0;i<p.length();i++){
        if(p[i]==p[i+1]){
            cout<<p[i]<<" ";
        }
    }
}

int main(){

    string s = "nmanm";
    check(s);
    return 0;
}