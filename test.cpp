#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;


    void printinfo(){
        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Age:";
        cout<<age<<endl;
        cout<<"Gender:";
        cout<<gender<<endl;
    }
};

int main(){

    Student A[2];
    for(int i=0;i<2;i++){
        cout<<"Name:";
        cin>>A[i].name;
        cout<<"Age:";
        cin>>A[i].age;
        cout<<"Gender:";
        cin>>A[i].gender;
    }

    for(int i=0;i<2;i++){
        A[i].printinfo();
    }
    return 0;
}