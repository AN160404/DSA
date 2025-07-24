#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    // Printing LL
    void print() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    // Pushing the value in the Back of the Linked List
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Reverse nodes in k-group (return new head)
    Node* reverseKGroup(Node* head, int k) {
        Node*ptr=head;
        Node* next=NULL;
        int count=0;
        while(count<k){
            if(ptr==NULL) return head;
            ptr=ptr->next;
            count++;
        }
        Node* prevNode=reverseKGroup(ptr,k);

        ptr=head;
        count=0;
        while(count<k){
            next=ptr->next;
            ptr->next=prevNode;
            prevNode=ptr;
            ptr=next;
            count++;
        }
        return prevNode;
    }

    // Setter for head (to update after reverse)
    void setHead(Node* newHead) {
        head = newHead;
    }

    // Getter for head (to pass as argument)
    Node* getHead() {
        return head;
    }
};

int main() {
    List obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);

    cout << "Original list: ";
    obj.print();

    Node* newHead = obj.reverseKGroup(obj.getHead(), 2);
    obj.setHead(newHead);

    cout << "Modified list: ";
    obj.print();

    return 0;
}
