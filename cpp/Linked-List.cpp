#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) return;
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    Solution sol;

    // Suppose we want to delete the node with value 5 (not the last node)
    ListNode* nodeToDelete = head->next; // node with value 5
    sol.deleteNode(nodeToDelete);

    printList(head); // Output: 4 1 9

    return 0;
}
