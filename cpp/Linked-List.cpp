#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Recursive function to swap pairs
ListNode* swapPairs(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    ListNode* nextptr = head->next;
    ListNode* prev = swapPairs(nextptr->next);

    nextptr->next = head;
    head->next = prev;
    return nextptr;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);
    cout << "Original list: ";
    printList(head);

    head = swapPairs(head);

    cout << "Swapped list: ";
    printList(head);

    return 0;
}
