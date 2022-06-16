#include<iostream>
using namespace std;
int main(){

    int i,n;
    cin>>n;
    if(n<=2){
        cout<<"Invalid"<<endl;
    }
    for(i=2;i<n;i++){       
        if(n%i==0){
            cout<<"Not prime"<<endl;
            break;
        }

    }
    if(i==n && i>2){
        cout<<"Prime"<<endl;
    }
    return 0;
}