#include <iostream>
using namespace std;
int main()
{

    int i,n,j;
    cout<<"Enter the number : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=n;j>i-1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}