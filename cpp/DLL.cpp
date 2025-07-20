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

    void pop_back(){
       Node *temp=tail;
       tail=tail->prev;
       if(tail!=NULL){
        tail->next=NULL;
       }
       temp->prev=NULL; 
       
       delete temp;
    }

    void insert(int val,int pos){
        Node *newNode=new Node(val);
        Node* ptr=head;
        for (int i = 0; i < val-1; i++)
        {
            ptr=ptr->next;
        }
        newNode->next=ptr->next;
        ptr->next->prev=newNode;
        ptr->next=newNode;
        newNode->prev=ptr;      
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

    obj.insert(0,1);

    obj.print();
    cout<<endl;

    // obj.pop_back();
    // obj.print();
}
