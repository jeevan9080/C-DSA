#include<iostream> //5.2
#include<cmath>
using namespace std;

int main(){

    int ld,n,r=0;
    cout<<"Enter a number:";
    cin>>n;

    while(n>0){
        ld=n%10;
        r = r*10 + ld;
        n=n/10;
    }
    cout<<r;
    return 0;
}