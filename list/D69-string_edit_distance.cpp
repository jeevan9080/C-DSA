#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int d[1001][1001];

    int func(string s,string t,int m,int n){

        if(m==-1) return n+1;
        if(n==-1) return m+1;

        if(d[m][n]!=-1) return d[m][n];
        if(s[m]==t[n]) return d[m][n]=func(s,t,m-1,n-1);

        int a = func(s,t,m-1,n-1);
        int b = func(s,t,m,n-1);
        int c = func(s,t,m-1,n);

        return d[m][n] = 1 + min(a,min(b,c));
    }

    int editDistance(string s,string t){
        int m=s.length();
        int n=t.length();
        memset(d,-1,sizeof(d));
        return func(s,t,m-1,n-1);
    }
};

int main(){

    string s="geek",t="gesek";
    Solution obj;
    cout<<obj.editDistance(s,t)<<endl;
    return 0;
}