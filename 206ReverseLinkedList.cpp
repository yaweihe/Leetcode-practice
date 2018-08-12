/*
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL


Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?
*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//迭代
/*
使用三个指针，需要注意指针的初始化，对单一歌指针初始化为NULL，第二个指针初始化为head，第三个指针初始化为NULL，不能将第一个指针初始化成head，否则最后反转后对链表的尾端指向的不是NULL。
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
       	

       	ListNode* first = NULL;
       	ListNode* second = head;
       	ListNode* third = NULL;

       	while(second){
       		third = second->next;
       		second->next = first;
       		first = second;
       		second = third;
       	}
       	return first;
    }
};


/*
method 2： 递归
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
 		
 		ListNode * nextNode = head->next;
 		ListNode * res = reverseList(head->next);
 		nextNode->next = head;
 		head->next = NULL;
 		return res;

}
