#include<bits/stdc++.h>
using namespace std;

void printstr(string s,int start,int end){

    for(int i=start;i<=end;i++){
        cout<<s[i];
    }
}

void longestPalStr(string s){

    int start=0,end=1,l,h;

    for(int i=1;i<s.length();i++){

        l=i-1;
        h=i;
        while(l>=0 && h<s.length() && s[h]==s[l]){

            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }

        l=i-1;
        h=i+1;

        while(l>=0 && h<s.length() && s[h]==s[l]){

            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
    }

    printstr(s,start,start+end-1);
}

int main(){

    string s = "aaaabbaa";
    longestPalStr(s);
    return 0;
}