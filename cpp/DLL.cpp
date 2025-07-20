#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        next=prev=NULL;
    }
};

class DLL{
    Node *head;
    Node *tail;
    public:
    DLL(){
        head=tail=NULL;
    }

    void push_front(int num){
        Node* newNode=new Node(num);
        Node* ptr=head;
        if(head==NULL && tail==NULL){
            head=tail=newNode;
            head->next=NULL;
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void reverseDLL(){
        Node* temp=NULL;
        Node* curr=head;
        while(curr!=NULL){
            // Swapping the next and prev
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            // The next of curr would be prev due to switch
            curr=curr->prev;
        }
        if(temp!=NULL){
            // Last node in the list will be head
            head=temp->prev;
        }
    }

    void print(){
        Node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->val<<" ";
            ptr=ptr->next;
        }
    }
};

int main(){
    DLL obj;
    obj.push_front(1);
    obj.push_front(2);
    obj.push_front(3);

    obj.print();
    cout<<endl;

    obj.reverseDLL();
    obj.print();
}
