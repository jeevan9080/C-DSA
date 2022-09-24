#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int A[],int n){

	if(n==0 || n==1){
		return n;
	}

	int j=0;
	int temp[n];
	for(int i=0;i<n-1;i++){
		if(A[i]!=A[i+1]){
			temp[j++]=A[i];
		}
	}
	temp[j++]=A[n-1];

	for(int i=0;i<j;i++){
		A[i]=temp[i];
	}

	return j;
}

int main(){

	int A[] = {1,1,2,3,4,3};
	int n = sizeof(A)/sizeof(A[0]);
	sort(A,A+n);
	n = removeDuplicate(A,n);

	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}

	return 0;
}