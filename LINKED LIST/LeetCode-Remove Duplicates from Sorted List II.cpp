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
 
// LEETCODE: 82. Remove Duplicates from Sorted List II

/*

Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

Return the linked list sorted as well.

Example 1:

Input: 1->2->3->3->4->4->5
Output: 1->2->5
Example 2:

Input: 1->1->1->2->3
Output: 2->3

*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        
         ListNode *dummy=new ListNode(-1);
         ListNode *fast=head;
         ListNode *slow=dummy;
         slow->next=fast;
        
        while(fast!=NULL)
        {
            while(fast->next!=NULL && fast->val==fast->next->val)
                fast=fast->next;
            if(slow->next!=fast)
            {
                slow->next=fast->next;
                fast=slow->next;
            }
            else
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        return dummy->next;
    }
};
