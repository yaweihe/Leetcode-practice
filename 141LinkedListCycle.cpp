/*
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//􏰯􏵳􏵴􏲗􏰟􏰛􏱶􏱓􏱉􏰑􏱸􏱡􏲂􏵵􏵶􏰕 􏰯􏵳􏵴􏲗􏰟􏰛􏱶􏱓􏱉􏰑􏱸􏱡􏲂􏵵􏵶􏰕 用一个哈希表 unordered_map<int, bool> visited􏰑􏲅􏲆􏱋􏲂􏲸􏲹􏱉, 记录每个元素是否被访问过，一旦出现某个元素被重复访问，说明存在环，空间复杂毒O(n),时间复杂度O(n).
//	设置两个指针，一个快一个慢，快的每次走两步，慢的每次走一步，如果快指针和慢指针相遇，则说明有环。
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
        	slow = slow->next;
        	fast = fast->next->next;
        	if(slow == fast) return true;
        }
        return false;

    }
};