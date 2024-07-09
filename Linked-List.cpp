#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
    public:
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void append(int data){
        Node *newNode=new Node(data);
        if (head==NULL){
            head=newNode;
            tail=newNode;
            return ;
        }
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        tail=newNode;
        
    }

    void deletionbeforeelement(){
        Node *ptr=head;
        int element=0;

        cout<<"Enter element :"<<endl;
        cin>>element;
        //Check for empty list
        if(ptr==NULL)
        {
            return ;
        }
        
        while(ptr->data!=element)
        {
            ptr=ptr->next;
        }
        //Check for head
        if(ptr->prev==head){
            head=ptr;
            ptr->prev=NULL;
        }
        else{
        ptr->prev->prev->next=ptr;      
        ptr->prev=ptr->prev->prev;
        }

        
    }

    void print()
    {
        Node *ptr=head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        return;        
    }
};
int main()
{
    LinkedList obj;
    obj.append(1);
    obj.append(2);
    obj.append(3);
    obj.append(4);
    obj.append(5);
    cout<<"List:"<<endl;
    obj.print();
    obj.deletionbeforeelement();
        cout<<"After deletion List:"<<endl;

    obj.print();

    return 0;
}