#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    void insertAtTail(node* &head,int val){

        node* n = new node(val);

        if(head==NULL){
            head=n;
        }

        node* temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=n;
    }

};


int main(){
    node* head=NULL;

    insertAtTail(head,1);

    return 0;
}