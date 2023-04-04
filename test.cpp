#include<bits/stdc++.h>
using namespace std;

int mostFrequent(int A[],int n){

	int count = 0,max=0,maxno;
	for(int i=0;i<n-1;i++){
		if(A[i]==A[i+1]){
			count++;

			if(count>max){
			max=count;
			maxno=A[i];
			}
		}
		else{
			count=0;
		}
		
	}
	return maxno;
}

int main(){

	int A[] = {1,1,1,3,4,5,2,3,4,5,5,5,6};
	int n = sizeof(A)/sizeof(A[0]);
	sort(A,A+n);
	cout<<mostFrequent(A,n);

//chang

	return 0;
}