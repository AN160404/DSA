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
    
    //Insertion at position
    void Insertionatposition()
    {
        int item=0,pos=0,count=0;
        cout<<"Enter item to be inserted:"<<endl;
        cin>>item;

        cout<<"Enter position:"<<endl;
        cin>>pos;

        Node *newN=new Node(item);
        Node *ptr=head;

        newN->data=item;
        //At beginning
        if (pos==1)
        {
            newN->prev=NULL;
            newN->next=head;
            head->prev=newN;
            head=newN;
            return;
        }

        while(count<pos-1)
        {
            ptr=ptr->next;
            count++;
        }    
        //At end
        if(ptr->next==NULL){
            newN->next=NULL;
            newN->prev=tail;
            tail->next=newN;
            tail=newN;
            return;
        }
        //At position
        else{
            newN->prev=ptr;
            newN->next=ptr->next;
            newN->next->prev=newN;
            ptr->next=newN;
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

    obj.Insertionatposition();
    cout<<"List:"<<endl;
    obj.print();
    return 0;
}