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
    public:
    LinkedList()
    {
        head=NULL;
    }
    void append(int data){
        Node *newNode=new Node(data);
        if (head==NULL){
            head=newNode;
            return ;
        }
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        
    }
    
    //Insertion at beginning
    void Insertionatbeginning()
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
            newN->prev=NULL;
            newN->next=head;
            head->prev=newN;
            head=newN;
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

    obj.Insertionatbeginning();
    cout<<"List:"<<endl;
    obj.print();
    return 0;
}