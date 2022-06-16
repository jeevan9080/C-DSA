#include<iostream> //8.2
using namespace std;

int main(){

    int i,n,A[5]={25,20,6,4,9},flag=0;
    cin>>n;

    for(i=0;i<5;i++){

        if(n==A[i]){
            cout<<n<<" is present at index no. = "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
    cout<<"Not present";
    }
    
    return 0;
}