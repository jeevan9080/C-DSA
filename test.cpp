#include<bits/stdc++.h>
using namespace std;
int main(){
/*
    stack<int> n,n1;
    n.push(1);
    n.push(2);
    n.push(3);
    n.push(4);
    n.push(5);
    n.push(6);
    n1=n;

    while(!n1.empty()){
        cout<<n1.top()<<" ";
        n1.pop();
    }*/

    queue<int> n,n1;
    n.push(1);
    n.push(2);
    n.push(3);
    n.push(4);
    n.push(5);
    n.push(6);
    n1=n;

    while(!n1.empty()){
        cout<<n1.front()<<" ";
        n1.pop();
    }
    return 0;
}