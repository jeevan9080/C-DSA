#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "3322251";
    int count=1,i=0;
    int n=s.length(); 

    while(i<n){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            cout<<count<<s[i];
            count=1;
        }
        i++;     
    }

    return 0;
}