/*
Given a singly linked list, determine if it is a palindrome.


Example 1:

Input: 1->2
Output: false

Example 2:

Input: 1->2->2->1
Output: true

Follow up:
Could you do it in O(n) time and O(1) space?
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// use extra space to save a link (O(n) space)
class Solution{
public:
	bool isPalindrome(ListNode* head){
		if (head == NULL || head->next == NULL) return true;
		vector<int> vals;
		while(head){
			vals.push_back(head->val);
			head = head->next;
		}
		for(int i =0, j = vals.size() - 1 - i; i < vals.size()/2; i++, j--){
			if(vals[i] != vals[j])
				return false;
		}
		return true;
	}
}


//use stack (O(n) space)
class Solution{
public:
	bool isPalindrome(ListNode* head){
		if (head == NULL || head->next == NULL) return true;
		stack<int> helper;
		ListNode* Node = head;
		while(Node){
			helper.push(Node->val);
			Node = Node->next;
		}

		Node = head;
		while(Node){
			if(Node->val != helper.top()){
				return false;
			}
			helper.pop();
			Node = Node->next;
		}
		return true;
	}
}



// reverse the half behind of the linked list,then compare with half front part and half behind linked list.

class Solution{
public:
	bool isPalindrome(ListNode* head){
		if(head == NULL || head->next == NULL) return true;

		ListNode* slow = head;
		ListNode* fast = head;

		while(fast && fast->next){
			fast = fast->next->next;
			slow = slow->next;
		}

		if(fast){
			//链表元素奇数个
			slow->next = reverseList(slow->next);
			slow = slow->next;
		}
		else{
			//链表元素偶数个
			slow = reverseList(slow);
		}
		while(slow){
			if(head->val != slow->val)
				return false;
			slow = slow->next;
			head = head->next;
		}
		return true;
	}

	ListNode* reverseList(ListNode* head){
		if(head == NULL || head->next == NULL) return head;

		ListNode *first = NULL;
		ListNode *second = head;
		ListNode *thrid = NULL;

		while(second){
			thrid = second->next;
			second->next = first;
			first = second;
			second = thrid;

		}
		return first;
	}
}





