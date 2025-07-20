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

    void pop_front(){
        
        
        Node* temp=head;
        head=head->next;
        if (head!=NULL)
        {
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
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

    obj.pop_front();
    obj.print();
}
