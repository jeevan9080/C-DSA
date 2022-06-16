#include<iostream>
using namespace std;
int main(){

    int date,pm=3000;
    for(date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pm==0){
            break;
        }
        cout<<date;
        cout<<" : Go out today!"<<endl;
        pm=pm-300;
        cout<<"balance:"<<pm<<endl;
    }
    return 0;
}