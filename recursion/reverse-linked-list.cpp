/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case: if the list is empty or has only one node, return the head.
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        // Recursively reverse the rest of the list, starting from the second node.
        ListNode* new_head = reverseList(head->next);
        
        // Reverse the 'next' pointer of the current node to point to the previous node.
        head->next->next = head;
        
        // Set the 'next' pointer of the current node to null, making it the new tail.
        head->next = nullptr;
        
        // Return the new head of the reversed list.
        return new_head;
    }
};
