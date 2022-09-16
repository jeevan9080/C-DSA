#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
        int d[505][2005];
        int rec(int i,int rem,vector<int> &A,int &k){

        if(i==A.size()){
            return 0;
        }
        if(d[i][rem]!=-1){
            return d[i][rem];
        }
        int ans;
        if(A[i]>rem){
            ans=(rem+1)*(rem+1)+rec(i+1,k-A[i]-1,A,k);
        }
        else{
            int choice1=(rem+1)*(rem+1)+rec(i+1,k-A[i]-1,A,k);
            int choice2=rec(i+1,rem-A[i]-1,A,k);
            ans=min(choice1,choice2);
        }
        d[i][rem]=ans;
        return d[i][rem];
    }


    int solveWordWrap(vector<int> A,int k){

    memset(d,-1,sizeof(d));
    return rec(0,k,A,k);
}
};


int main(){

    vector<int> A = {3,2,2,5};
    int k=6;
    Solution obj;
    cout<<obj.solveWordWrap(A,k);

    return 0;
}
