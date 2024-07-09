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
    
    //Search
    void search()
    {
        int item,count=0;
        cout<<"Enter item to be searched:"<<endl;
        cin>>item;
        Node *ptr=head;
        while (ptr->data!=item)
        {
            ptr=ptr->next;
            count++;
        }
        cout<<"Item: "<<ptr->data<<" found at: "<<count<<endl;
        return ;        
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
    obj.search();
    return 0;
}