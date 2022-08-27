#include<bits/stdc++.h>
using namespace std;


int main(){
vector<int> A={-2,1,-3,4,-1,2,1,-5,4};
int n=A.size();

int cs=0,maxsum=INT_MIN;
for(int i=0;i<n;i++){
	cs+=A[i];
	if(cs<0){
		cs=0;
	}
	maxsum=max(maxsum,cs);
}
cout<<maxsum<<endl;

return 0;
}