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

    void insert_at_tail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }

    void del_at_head(){
        Node* temp=NULL;
        if(head==NULL) return;
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        temp=head;
        head=head->next;
        tail->next=head;
        temp->next=NULL;
        delete temp;
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
    obj.insert_at_tail(1);
    obj.insert_at_tail(2);
    obj.insert_at_tail(3);

    obj.print();

    cout<<endl;

    obj.del_at_head();
    obj.del_at_head();
    obj.del_at_head();
    obj.print();
}