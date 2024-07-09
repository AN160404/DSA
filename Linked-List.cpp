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
    
    //Traversal
    void print()
    {
        Node *ptr=head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        cout<<endl;
        
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
    return 0;
}