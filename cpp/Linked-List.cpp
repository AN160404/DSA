#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CLL
{
    Node *head;
    Node *tail;

public:
    CLL()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_at_tail(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }

    void reverse(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        Node* start=head;
        do{
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }while(curr!=start);

        head->next=prev; // head is the old head and the new tail and after reversal prev is the new head
        tail=head; // old head is the tail 
        head=prev; // prev is the head
    }

    void print()
    {
        Node *ptr = head->next;
        cout << head->val << " ";
        while (ptr != head)
        {
            cout << ptr->val << " ";
            ptr = ptr->next;
        }
    }
};

int main()
{
    CLL obj;
    obj.insert_at_tail(1);
    obj.insert_at_tail(2);
    obj.insert_at_tail(3);

    obj.print();

    cout << endl;

    obj.reverse();

    obj.print();
}