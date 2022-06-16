#include <iostream>
using namespace std;
int main()
{

    int i,n,j,k=1;
    cout<<"Enter the number : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=i+1){
                cout<<" ";
            }
            else{
                cout<<k++<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}