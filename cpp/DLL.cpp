#include <iostream>
using namespace std;

// Definition for a Node.
struct Node {
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

// Flatten function
Node* flatten(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        Node* next = NULL;
        if (curr->child != NULL) {
            next = curr->next;
            curr->next = flatten(curr->child);
            if (curr->next) curr->next->prev = curr;
            curr->child = NULL;

            while (curr->next != NULL) {
                curr = curr->next;
            }
            if (next != NULL) {
                curr->next = next;
                next->prev = curr;
            }
        }
        curr = curr->next;
    }
    return head;
}

// Helper: Print the doubly linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Main for testing
int main() {
    // Level 1: 1 - 2 - 3 - 4 - 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->prev = head->next->next->next;

    // Level 2: 7 - 8 - 9 attached to node 3
    Node* child = new Node(7);
    child->next = new Node(8);
    child->next->prev = child;
    child->next->next = new Node(9);
    child->next->next->prev = child->next;
    head->next->next->child = child;

    cout << "Original list:\n";
    printList(head); // will only show 1-2-3-4-5

    head = flatten(head);

    cout << "\nFlattened list:\n";
    printList(head); // should show 1-2-3-7-8-9-4-5

    return 0;
}
