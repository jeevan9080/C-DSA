#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    string s = "fytfuygk";
    
    //to upper
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    //to lower
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    return 0;
}