#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) : val(x), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    Node* getHead() {
        return head;
    }

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

    void createCycle(int pos) {
        if (pos == -1) return;
        Node* tail = head;
        Node* cycleNode = nullptr;
        int index = 0;
        while (tail->next) {
            if (index == pos)
                cycleNode = tail;
            tail = tail->next;
            index++;
        }
        tail->next = cycleNode;
    }

    // Detect cycle using Floyd’s Tortoise and Hare algorithm
    bool hasCycle() {
        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }
        return false;
    }
};

int main() {
    LinkedList list1;
    list1.insert(3);
    list1.insert(2);
    list1.insert(0);
    list1.insert(-4);
    list1.createCycle(1); // cycle at position 1
    cout << "List 1 (with cycle): " << (list1.hasCycle() ? "Cycle detected" : "No cycle") << endl;

    LinkedList list2;
    list2.insert(1);
    list2.insert(2);
    list2.createCycle(-1); // no cycle
    cout << "List 2 (no cycle): " << (list2.hasCycle() ? "Cycle detected" : "No cycle") << endl;

    return 0;
}
