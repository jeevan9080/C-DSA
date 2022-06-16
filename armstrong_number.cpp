#include<iostream> //5.2
#include<cmath>
using namespace std;

int main(){

    int ld,n,a=0;
    cout<<"Enter a number:";
    cin>>n;

    while(n>0){
        ld=n%10;
        a = a + pow(ld,3);
        n=n/10;
    }
    cout<<a<<endl;
    return 0;
}