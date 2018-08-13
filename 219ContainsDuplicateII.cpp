/*
Given an array of integers and an integer k, find out whether 
there are two distinct indices i and j in the array such that nums[i] = nums[j] 
and the absolute difference between i and j is at most k.

Example 1:
nums = [1,2,1], k = 1

Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false

*/
class Solution{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k){
		if(k <= 0 || nums.empty()) return false;
		int length = nums.size();
		unordered_map<int,int> hm;
		for(int i = 0; i < length; ++i){
			if(hm.find(nums[i]) == hm.end()){
				hm.insert({nums[i], i});
			}
			else{
				if(i - hm[nums[i]] <= k){
					return true;
				}
				else{
					hm[nums[i]] = i;
				}
			}
		}
		return false;
	}
};

class Solution{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k){
		int length = nums.size();
		if(k < 1|| length == 1) return false;
		vector<int> temp = nums;
		int count = 0;
		sort(temp.begin(), temp.end());
		for(int x = 0; x < length -1; x++){
			if(temp[x+1]!= temp[x])
				count++;
		}

		if(count == length-1){
			return false;
		}
		for(int i =0; i < length; i++){
			for(int j = 1; j < k; j++){
				if(nums[i+j] == nums[i]&& i+j < length){
					return true;
				}
			}
		}
		return false;
	}
};