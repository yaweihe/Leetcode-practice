/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
*/

//异或，不仅能处理两次的情况，只要出现偶数次，都可以清零

class Solution{
public: 
	int singleNumber(vector<int>& nums){
		int x = 0;
		for( auto i : nums){
			x ^= i;
		}
		return x;
	}
};