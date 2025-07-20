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

    void push_back(int num){
        Node* newNode=new Node(num);
        if(head==NULL && tail==NULL){
            head=tail=newNode;
            head->next=NULL;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
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
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.print();
}
