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
    
    struct Node *ptr1;
    ptr1=head;
    cout<<"Old List:"<<endl;

    while (ptr1!=NULL)
    {
        cout<<ptr1->data<<endl;
        ptr1=ptr1->next;
    }    

    struct Node *ptr2;
    ptr2=head;

    int i=0,loc=0;
    cout<<"Enter location:"<<endl;
    cin>>loc;

    while (i<loc-1)
    {
        ptr2=ptr2->next;
        i++;
    }
    ptr2->next=ptr2->next->next;

    struct Node *ptr3;
    ptr3=head;
    while (ptr3!=NULL)
    {
        cout<<ptr3->data<<endl;
        ptr3=ptr3->next;
    }
    
    
    return 0;
}