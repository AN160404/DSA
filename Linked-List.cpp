#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
int main()
{
    struct Node* head,*second,*third,*fourth,*fifth;
    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));
    fourth=(struct Node*) malloc(sizeof(struct Node));
    fifth=(struct Node*) malloc(sizeof(struct Node));

    head->data=0;
    head->next=second;
    second->data=1;
    second->next=third;
    third->data=2;
    third->next=fourth;
    fourth->data=3;
    fourth->next=fifth;
    fifth->data=4;
    fifth->next=NULL;
    cout<<"OG List:"<<endl;
    struct Node *ptr;
    ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }

    int item;
    cout<<"Enter item to be inserted: "<<endl;
    cin>>item;

    struct Node *newnode;
    newnode=(struct Node*) malloc(sizeof(struct Node));
    newnode->data=item;
    newnode->next=head;
    head=newnode;
    
    struct Node *ptr1;
    ptr1=head;

    while (ptr1!=NULL)
    {
        cout<<ptr1->data<<endl;
        ptr1=ptr1->next;
    }    

    return 0;
}