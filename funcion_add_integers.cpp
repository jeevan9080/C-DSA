#include<iostream> //6.1
using namespace std;

int add(int n1,int n2){
    int sum=n1+n2;
    return(sum);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<add(a,b)<<endl;
    return 0;
}