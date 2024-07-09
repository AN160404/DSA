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
    
    //Insertion at End
    void Insertionatend()
    {
        int item;
        cout<<"Enter item to be inserted:"<<endl;
        cin>>item;

        Node *newN=new Node(item);
        newN->data=item;
        if (head==NULL)
        {
            newN->next=newN->prev;
            head=newN;
            return;
        }
        else{
            newN->next=NULL;
            newN->prev=tail;
            tail->next=newN;
            tail=newN;
            return;
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

    obj.Insertionatend();
    cout<<"List:"<<endl;
    obj.print();
    return 0;
}