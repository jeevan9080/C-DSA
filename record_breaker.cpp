#include<iostream> //1 2 0 7 2 0 2 2
using namespace std;
int main(){

int n,i,j,A[20];
cout<<"Enter:";
cin>>n;
cout<<"Elements:";
for(i=0;i<n;i++){
    cin>>A[i];
}

int maxno=INT_MIN,ans=0;
if(n==1){
    cout<<n<<endl;
    return 0;
}

for(i=0;i<n;i++){
    if(A[i]>maxno && A[i]>A[i+1]){
        ans++;
    }
    maxno = max(A[i],maxno);
}

cout<<ans<<" ";
return 0;
}