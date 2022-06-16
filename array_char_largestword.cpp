#include<iostream> //10
#include<climits>
using namespace std;
int main(){

    int n;
    cin>>n;
    cin.ignore();
    char A[n+1];


    cin.getline(A,n);
    cin.ignore();

    int i=0;
    int currLen=0,maxLen=0;
    int st=0,maxst=0;

    while(1){
        if(A[i]==' ' || A[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else
        currLen++;
        if(A[i]=='\0')
            break;
            
        i++;
        
    }
    cout<<maxLen<<endl;
    for(i=0;i<maxLen;i++){
        cout<<A[i+maxst];
    }
    return 0;
}