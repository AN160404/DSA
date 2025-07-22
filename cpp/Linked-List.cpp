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

    void delete_at_position(int pos)
    {
        Node *ptr = head;
        if (pos == 0)
        {
            head = head->next;
            tail->next = head;
            delete ptr;
            return;
        }
        for (int i = 0; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }

        Node *temp = ptr->next;
        ptr->next = temp->next;
        if (temp == tail)
        {
            tail = ptr;
            tail->next = head;
        }

        delete temp;
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

    obj.delete_at_position(2);

    obj.print();
}