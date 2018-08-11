/*
Remove all elements from a linked list of integers that have value val.
Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5

*/

/**
  * Definition for singly-linked list.
  * struct ListNode{
  * 	int val;
  *		ListNode *next;
  *		ListNode(int x) : val(x), next(NULL){}
  *};
  */

class Solution{
public:
	ListNode* removeElements(ListNode* head, int val){
		if(head == NULL) return head;
		ListNode *newhead = new ListNode(-1);
		newhead->next = head;
		ListNode *pre = newhead;
		ListNode *cur = head;
		while(cur != NULL){
			if(cur->val == val){
				cur = cur->next;
				pre->next = cur;
			}
			else{
				pre = cur;
				cur = cur->nxet;
			}
	
		}
		return newhead->next;
	}
}