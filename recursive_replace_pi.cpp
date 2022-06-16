#include<iostream>
#include<string>
using namespace std;

void reppi(string s){
    
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        reppi(s.substr(2));
    }
    else{
        cout<<s[0];
        reppi(s.substr(1));
    }
    
}

int main(){
    
    string s = "pippxxppixipi";
    reppi(s);
    return 0;
}