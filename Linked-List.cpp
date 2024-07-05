#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
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

    return 0;
}