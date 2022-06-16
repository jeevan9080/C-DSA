#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Input"<<endl;
    }
    else if(n%2==0){
        cout<<"Even"<<endl;
    } 
    else{
        cout<<"Odd"<<endl;
    }    
    

    return 0;
}