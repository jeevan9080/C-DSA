#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int sum(int n){
   
    if(n==0){
        return 0;
    }
    
    int prevsum=sum(n-1);
    return n+prevsum;
}

int main(){

    int n;
    cout<<"enter:";
    cin>>n;
    
    cout<<sum(n)<<endl;
    
    return 0;
}