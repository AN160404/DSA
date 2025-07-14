#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node *head;
    Node *tail;

    public:
    List(){
        head=tail=NULL;
    }

    // Printing LL
    void print(){
        Node *ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }

    // Pushing the value in Front of the Linked List
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    
};
int main(){
    List obj;

    obj.push_front(1);
    obj.push_front(2);
    obj.push_front(3);

    obj.print();
}