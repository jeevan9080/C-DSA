#include<bits/stdc++.h>
using namespace std;

void subsequence(string t,int i,int n,string s){

    if(i==n){
        cout<<t<<" ";
    }
    else{
    subsequence(t,i+1,n,s);
    t=t+s[i];
    subsequence(t,i+1,n,s);
    }
}

int main(){

    string s = "abc";
    int n=s.length();
    subsequence(" ",0,n,s);
    return 0;
}