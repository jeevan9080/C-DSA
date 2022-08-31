#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

    void insertAtTail(node* &head,int val){

        node* n = new node(val);

        if(head==NULL){
            head=n;
            return;
        }

        node* temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

    void deletion(node* &head,int val){

        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }

        node* todelete = temp->next;
        temp->next=temp->next->next;

        delete todelete;
    }

    node* reverse(node* &head){

        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;

        while(currptr!=NULL){
            nextptr = currptr->next;
            currptr->next = prevptr;

            prevptr=currptr;
            currptr=nextptr;

        }
        return prevptr;
    }

    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


int main(){

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    node* newhead=reverse(head);
    display(newhead);

/*
    deletion(head,2);
    display(head);
*/
    return 0;
}