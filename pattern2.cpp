#include <iostream>
using namespace std;
int main()
{

    int i, row, col, j;
    cout << "Enter no. of rows : ";
    cin >> row;
    cout << "Enter no. of cols : ";
    cin >> col;

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}