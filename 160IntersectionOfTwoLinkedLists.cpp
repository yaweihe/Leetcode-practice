/*
Write a program to find the node at which the intersection of two singly linked lists begins.
For example, the following two linked lists:

A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3

begin to intersect at node c1.

Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unsigned int nLength1 = GetListLength(headA);
        unsigned int nLength2 = GetListLength(headB);

        int nLengthDif = nLength1 - nLength2;

        ListNode* pListHeadLong = pheadA;
        ListNode* pListHeadShort = pheadB;
        if(nLength2 > nLength1)
        {
        	pListHeadLong = pheadB;
        	pListHeadShort = pheadA;
        	nLengthDif = nLength2 - nLength1;
        }

        for(int i = 0; i < nLengthDif; ++i){
        	pListHeadLong = pListHeadLong->next;
        }
        while((pListHeadLong != NULL) && (pListHeadShort != NULL) && (pListHeadLong != pListHeadShort)){
        	pListHeadLong = pListHeadLong->next;
        	pListHeadShort = pListHeadShort->next;
        }

        ListNode* pFirstCommonNode = pListHeadLong;

        return pFirstCommonNode;
    }

    unsigned int GetListLength(ListNode* pHead){
    	unsigned int nLength = 0;
    	ListNode* pNode = pHead;
    	while(pNode != NULL){
    		++nLength;
    		pNode = pNode->next;
    	}
    	return nLength;
    }
};