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

    void deletionatposition(){
        Node *ptr=head;
        int pos=0;

        cout<<"Enter position :"<<endl;
        cin>>pos;

        if(ptr==NULL)
        {
            return ;
        }
        for (int i = 0; i < pos; i++)
        {
            ptr=ptr->next;
        }
        ptr->next->prev=ptr->prev;
        ptr->prev->next=ptr->next;      
        
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
    obj.deletionatposition();
        cout<<"After deletion List:"<<endl;

    obj.print();

    return 0;
}