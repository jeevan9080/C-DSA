#include<bits/stdc++.h>
using namespace std;

bool isrotation(string a,string b){

    if(a.length()!=b.length()){
        return false;
    }

    string temp=a+a;
    return(temp.find(b) != string::npos);
}

int main(){

    string a="aacd",b="acdb";

    if(isrotation(a,b)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}