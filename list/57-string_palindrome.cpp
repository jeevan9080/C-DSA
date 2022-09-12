#include<bits/stdc++.h>
using namespace std;

void ispalindrome(string s){

    string p=s;
    reverse(p.begin(),p.end());
    
    if(p==s){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main(){

    string s = "naman";
    ispalindrome(s);
    return 0;
}