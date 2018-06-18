/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.


Example 1:

Input: [1,3,5,6], 5
Output: 2
Example 2:

Input: [1,3,5,6], 2
Output: 1
Example 3:

Input: [1,3,5,6], 7
Output: 4
Example 4:

Input: [1,3,5,6], 0
Output: 0

*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        int mid;
        while(low <= high){
        	mid = low + (high - low)/2;
        	if(nums[mid] == target)
        		return mid;
        	else if (nums[mid] > target)
        		high = mid -1;
        	else if(nums[mid] < target)
        		low = mid + 1;
        }
        //when target > the last element:
        if(target > nums[low])
        	return low + 1;
        else
        	return low;

       /*
			vector<int>:: iterator a;
			int b;
			 for(a = nums.begin(), b=0; a != nums.end(); a++, b++){
					if(*a >=target) return b;
			 }
			 return b;
       */

    }
};