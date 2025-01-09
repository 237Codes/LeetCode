/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Initialize two pointers, slow and fast.
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Traverse the linked list using two pointers.
        // The slow pointer moves one step at a time, while the fast pointer moves two steps at a time.
        // If there is a cycle, they will eventually meet at some point in the list.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;     // Move slow one step.
            fast = fast->next->next; // Move fast two steps.
            
            if (slow == fast) {
                // If the two pointers meet, there is a cycle in the linked list.
                return true;
            }
        }
        
        // If the while loop terminates without the two pointers meeting, there is no cycle.
        return false;
    }
};
