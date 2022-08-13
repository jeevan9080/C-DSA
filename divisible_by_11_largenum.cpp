#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=10979,A[20],ls=0,rs=0;
    string s = to_string(n);
    cout<<s<<endl;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(i%2==0){
            ls+=(s[i]-'0');
        }
        else{
            rs+=(s[i]-'0');
        }
    }
    if(((rs-ls)%11)==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}