/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/
static auto x = []() {
	std::ios::sync_with_stdio(false); //close STDIN sync with CIN to reduce read time
	std::cin.tie(NULL);
	return 0;
}();

class Solution{
public:
	int maxSubArray(vector<int>& nums) {
		//动态规划，求和，然后判断是否小于0，那么后面的数加上前面的数的和就一定比自身小，
		//所以又重新求和，并和之前的最大自序和比较，取最大值。
		int size = nums.size();
		if(!size) return 0;
		int sum = 0; maxsum = INT_MIN;
		for(int i = 0; i < size; ++i){
			sum += nums[i];
			if(sum > maxsum)
				maxsum = sum;
			if(sum < 0)
				sum = 0;
		}
		return maxsum;

		/*分治

		*/
	}
}