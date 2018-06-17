/*
Given a sorted linked list, delete all nodes that have duplicate numbers, 
leaving only distinct numbers from the original list.

Example 1:

Input: 1->2->3->3->4->4->5
Output: 1->2->5
Example 2:

Input: 1->1->1->2->3
Output: 2->3
*/


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
    ListNode* deleteDuplicates(ListNode* head) {
    	if(head == NULL || head->next == NULl)return head;
    	ListNode* start = new ListNode(0);
    	start->next = head;
    	ListNode* pre = start;
    	while(pre->next){
    		ListNode* cur = pre->next;
    		while(cur->next && cur->next->val == cur->val) cur = cur->next;
    		if(cur!= pre->next) pre->next = cur->next;
    		else pre = pre->next
    	}
    	return start->next;
    }

};