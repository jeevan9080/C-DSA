#include<iostream> //10 7 4 6 8 10 11
using namespace std;
int main(){

int n,i,j,A[20];
cout<<"Enter:";
cin>>n;
cout<<"Elements:";
for(i=0;i<n;i++){
    cin>>A[i];
}

int ans=2,curr=2;
int pd=A[1]-A[0];
for(j=2;j<n;j++){
    if(pd==A[j]-A[j-1]){
        curr++;
    }
    else{
        pd=A[j]-A[j-1];
        curr=2;
    }
    ans=max(ans,curr);
}
cout<<ans<<endl;
return 0;
}