#include<iostream> //6.3
using namespace std;

bool check(int x,int y,int z){

    int a,b,c;

    a = max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == (b*b)+(c*c)){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){

        cout<<"it is";
    }
    else{
        cout<<"it is not";
    }
    return 0;
}