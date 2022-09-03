#include<bits/stdc++.h>
using namespace std;

void reverse(string s){

    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
}

int main(){

    string s = "jeevan";
    reverse(s);
    return 0;
}