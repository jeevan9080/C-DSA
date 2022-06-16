#include<iostream>
using namespace std; //6.2

int factorial(int n){

    int r=1,i;

    for(i=1;i<=n;i++){
        r = r*i;
    }
    cout<<r<<endl;
    return 0;
}


int main(){

    int n;
    cin>>n;

    factorial(n);
    return 0;
}