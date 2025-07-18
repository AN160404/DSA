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
        Node* cycleStart = nullptr;
        int index = 0;
        while (tail->next) {
            if (index == pos) cycleStart = tail;
            tail = tail->next;
            index++;
        }
        tail->next = cycleStart;
    }

    // Detects the node where cycle begins (if present), otherwise returns nullptr
    Node* detectCycle() {
        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;

        // Step 1: Detect if cycle exists
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        if (!hasCycle) return nullptr;

        // Step 2: Find the start of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // Start node of the cycle
    }
};

int main() {
    LinkedList list1;
    list1.insert(3);
    list1.insert(2);
    list1.insert(0);
    list1.insert(-4);
    list1.createCycle(1); // cycle starts at node with value 2

    Node* cycleStart1 = list1.detectCycle();
    if (cycleStart1)
        cout << "Cycle detected at node with value: " << cycleStart1->val << endl;
    else
        cout << "No cycle detected in list 1." << endl;

    LinkedList list2;
    list2.insert(1);
    list2.insert(2);
    list2.createCycle(-1); // no cycle

    Node* cycleStart2 = list2.detectCycle();
    if (cycleStart2)
        cout << "Cycle detected at node with value: " << cycleStart2->val << endl;
    else
        cout << "No cycle detected in list 2." << endl;

    return 0;
}
