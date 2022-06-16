#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int gcd(int a,int b){
    int rem;
    while(b>0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){

    int a,b;
    cout<<"Enter:";
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
    
    return 0;
}