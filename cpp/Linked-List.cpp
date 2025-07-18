#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        if (!head) {
            head = new Node(value);
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = new Node(value);
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

Node* mergeTwoLists(Node* list1, Node* list2) {
    Node* ptr1 = list1;
    Node* ptr2 = list2;
    if (ptr1 == nullptr) return ptr2;
    if (ptr2 == nullptr) return ptr1;
    if (ptr1->val <= ptr2->val) {
        ptr1->next = mergeTwoLists(ptr1->next, ptr2);
        return ptr1;
    } else {
        ptr2->next = mergeTwoLists(ptr1, ptr2->next);
        return ptr2;
    }
}

int main() {
    LinkedList l1, l2;
    l1.insert(1);
    l1.insert(3);
    l1.insert(5);

    l2.insert(2);
    l2.insert(4);
    l2.insert(6);

    Node* mergedHead = mergeTwoLists(l1.head, l2.head);

    Node* temp = mergedHead;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
