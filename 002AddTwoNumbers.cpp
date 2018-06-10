/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res, *q, *p;
        if(l1 == NULL)
        	return l2;
        else if (l2 == NULL)
        	return l1;
        else{
        	carry += l1->val + l2->val;	 	//first node
        	res = new ListNode(carry%10);	//assign space and calculate the value of first node 
        	carry /= 10;
        	l1 = li->next;
        	l2 = l2->next;
        	q = res;			//q always points to the last node in the result list
        }
        while(l1 != NULL && l2 != NULL){
        	carry += l1->val + l2->val;
        	p = new ListNode(carry%10);
        	carry/=10;
        	q->next = p;
        	q = p;
        	l1 = l1->next;
        	l2 = l2->next;
        }
        // if l1 has remaing nodes, direct handling
        while(l1 != NULL){
        	carry += l1->val;
        	p = new ListNode(carry%10);
        	carry /= 10;
        	q -> next = p;
        	q = p;
        	l1 = l1->next;
        }
        // if l2 has re,aomgmpdes, direct handling
        while(l2 != NULL){
        	carry += l2->val;
        	p = new ListNode(carry%10);
        	carry /= 10;
        	q->next = p;
        	q = p;
        	l2 = l2-> next;
        }
        // the final carry value maybe greater than 10, special handing
        while(carry!= 0){	
        	p = new ListNode(carry%10);
        	carry/= 10;
        	q->next = p;
        	q = p;
        }
        return ans;
    }

};