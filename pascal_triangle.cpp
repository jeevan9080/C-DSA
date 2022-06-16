#include<iostream>
using namespace std;


int factorial(int n){
    
    int r=1;
    for(int i=1;i<=n;i++){
        r=r*i;
        
    }
    return r;
}


int main(){
    
    int n,i,j,ncr;
    cin>>n;
    
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            ncr = factorial(i)/(factorial(i-j)*factorial(j));
            cout<<ncr<<" ";
        }
        cout<<endl;
    }
    

    
    return 0;
}