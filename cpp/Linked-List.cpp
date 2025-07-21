#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

class CLL{
    Node* head;
    Node* tail;
    public:
    CLL(){
        head=NULL;
        tail=NULL;
    }

    void insert_at_head(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }

    void print(){
        Node* ptr=head->next;
        cout<<head->val<<" ";
        while(ptr!=head){
            cout<<ptr->val<<" ";
            ptr=ptr->next;
        }
    }
};

int main(){
    CLL obj;
    obj.insert_at_head(1);
    obj.insert_at_head(2);
    obj.insert_at_head(3);

    obj.print();
}