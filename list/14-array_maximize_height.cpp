#include<bits/stdc++.h>
using namespace std;

void solve(int A[],int n,int k){

for(int i=0;i<n;i++){
	if(A[i]<=k){
		A[i]+=k;
	}
	else{
		A[i]-=k;
	}
}

for(int i=0;i<n;i++){
	cout<<A[i]<<" ";
}

int maxno=INT_MIN,minno=INT_MAX;
for(int i=0;i<n;i++){
	maxno=max(maxno,A[i]);
	minno=min(minno,A[i]);
}

cout<<endl<<maxno-minno;
}

int main(){

int n=4,k=2;
int arr[n-1]={1, 5, 8, 10};

solve(arr,n,k);

return 0;
}