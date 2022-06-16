#include<iostream>
using namespace std;

int fact(int n){
    
    if(n==0){
        
        return 1;
    }
    
    int prevnum = fact(n-1);
    return n*prevnum;
     
}

int main(){
    
    int n;
    cout<<"Enter:";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}