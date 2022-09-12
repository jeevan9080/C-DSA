#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="3322251";

    int count=1;
    int i=0;
    while(i<s.length()){
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