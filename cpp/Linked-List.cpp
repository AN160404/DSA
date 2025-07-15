#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    // Printing LL
    void print()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }

    // Inserting at a particular position
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        if (pos == 0)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    int middle()
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->data<<endl;
    }
};
int main()
{
    List obj;

    obj.insert(1, 0);
    obj.insert(2, 1);
    obj.insert(3, 2);
    obj.insert(4, 3);
    obj.insert(5, 4);
    obj.insert(6, 5);
    obj.print();

    cout << endl;

    obj.middle();
}