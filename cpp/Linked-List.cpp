#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) : val(x), next(nullptr), random(nullptr) {}
};

Node* copyRandomList(Node* head) {
    if (head == nullptr) return nullptr;
    unordered_map<Node*, Node*> m;
    Node* newHead = new Node(head->val);
    Node* newTemp = newHead;
    Node* oldTemp = head->next;
    m[head] = newHead;
    while (oldTemp != nullptr) {
        Node* copy = new Node(oldTemp->val);
        m[oldTemp] = copy;
        newTemp->next = copy;
        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }
    oldTemp = head;
    newTemp = newHead;
    while (oldTemp != nullptr) {
        newTemp->random = m[oldTemp->random];
        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }
    return newHead;
}

void printList(Node* head) {
    while (head) {
        cout << "Val: " << head->val;
        if (head->random)
            cout << ", Random: " << head->random->val;
        else
            cout << ", Random: NULL";
        cout << endl;
        head = head->next;
    }
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;

    a->random = c;
    b->random = a;
    c->random = b;

    Node* copied = copyRandomList(a);
    printList(copied);

    return 0;
}
