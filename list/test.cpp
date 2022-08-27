#include<bits/stdc++.h>
using namespace std;

void punion(int A1[],int A2[],int n,int m){

	int j=0,i=0;
	while(i<n && j<m){
		if(A1[i]<A2[j]){
			cout<<A1[i++]<<" ";
		}
		else if(A2[j]<A1[i]){
			cout<<A2[j++]<<" ";
		}
		else{
			cout<<A2[j++]<<" ";
			i++;
		}
	}
	while(i<n){
		cout<<A1[i++]<<" ";
	}
	while(j<m){
		cout<<A2[j++]<<" ";
	}
}


int main(){

	int A1[]={1,2,3,4,5};
	int A2[]={1,2};

	int n=sizeof(A1)/sizeof(A1[0]);
	int m=sizeof(A2)/sizeof(A2[0]);

	punion(A1,A2,n,m);

	return 0;
}