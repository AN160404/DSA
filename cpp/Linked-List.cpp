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

    // Pushing the value in the Back of the Linked List
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    // Popping the elements from the start of the list
    void pop_front(){
        Node * temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }   
};
int main(){
    List obj;

    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);

    obj.print();
    cout<<endl;

    obj.pop_front();

    obj.print();
}