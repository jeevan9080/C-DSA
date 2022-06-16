#include<iostream>
using namespace std; //6.2

void fib(int num){
    int t1=0,t2=1,nt;

    for(int i=0;i<=num;i++){
        cout<<t1<<" ";
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return;
}

int main(){

    int n;
    cin>>n;

    fib(n);
    return 0;
}