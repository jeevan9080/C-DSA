#include<bits/stdc++.h>
using namespace std;

int count(string s,int n){

   int count0=0,count1=0,cnt=0;
   for(int i=0;i<n;i++){
    if(s[i]=='0'){
        count0++;
    }
    else{
        count1++;
    }
    if(count0==count1){
        cnt++;
    }
   }

   if(count0!=count1){
    return -1;
   }
   return cnt;
}

int main(){

    string s="0100110101";
    int n=s.length();
    cout<<count(s,n);
    return 0;
}