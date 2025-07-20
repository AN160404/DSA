#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value, ListNode* nextNode = nullptr) {
        val = value;
        next = nextNode;
    }
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode(-1, head);  // dummy node before head
        ListNode* prev = temp;
        ListNode* curr = head;

        while (curr != nullptr) { //using curr and prev to remove the elements
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
            } else {
                prev = prev->next;
            }
            curr = prev->next;
        }

        ListNode* result = temp->next;
        delete temp; 
        return result;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    Solution sol;
    ListNode* result = sol.removeElements(head, 6);

    printList(result); // Output: 1 2 3 4 5

    return 0;
}
