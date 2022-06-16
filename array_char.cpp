#include<iostream> //10
#include<climits>
using namespace std;
int main(){

    char A[100] = "apple";
    int i=0;
    while(A[i]!='\0'){
        cout<<A[i];
        i++;
    }
    return 0;
}