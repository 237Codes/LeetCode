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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        //Base case if list1 is empty
        if(!list1){
            return list2;
        }

        //Base case if list2 is empty
        if(!list2){
            return list1;
        }

        //compare the values of the current nodes in list1 and list 2
        if(list1->val < list2->val){
            //take the current value of list 1
            //set the next value to a recursive call which returns the smaller one into list 1
            list1->next = mergeTwoLists(list1->next, list2);

            return list1;
        }
        else {
            //take the current value of list 2
            //set the next value to a recursive call which retuns the smaller one into list 2
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }

    }
};