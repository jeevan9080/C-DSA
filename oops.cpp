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

    Student(){
        cout<<"Default constructor"<<endl;
    }

    Student(string s,int a,bool g){
        cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    Student(Student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } 
    ~Student(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    /*
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
    }*/

    Student a("jeevan",21,0);
    //a.printinfo();
    Student b;
    Student c = a;

    return 0;
}