#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"Enter a char:";
    cin>>button;

    switch(button){
        case 'a':
            cout<<"hello";
            break;
        case 'b':
            cout<<"vanakkam";
            break;
        case 'c':
            cout<<"hola";
            break;
        case 'd':
            cout<<"namaste";
            break;
        
        default:
            cout<<"i'm still learning"<<endl;
            break;
    }
    return 0;
}