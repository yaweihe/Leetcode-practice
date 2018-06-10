/*
Given an array of integers, returnindices of the two numbers such that they add up to a specific target.
you may assume that each input would have exactly one solution, and you may not use the same element twice.
Example:
Give nums = [2,7,11,15], target =9;
Because nums[0] + nums[1] = 2 + 7 = 9, return [0,1].
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int &target){
        /*
        vector<int> res;
        for(int i =0; i < nums.size(); ++i){
            for(int j = i+1; j < nums.size(); j++){
                if(target == nums[i] + nums[j]){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
         
				}
			}
		}
    }   */
        unordered_map<int,int> MapValueToIndex; // prevent repeated numbers
        for(int i =0; i < nums.size(); ++i){
            const int first = nums[i];
            const int second = target - nums[i];
            auto FindResult = MapValueToIndex.find(second);
            if(FindResult != MapValueToIndex.end())
            {
                return{i, FindResult->second};
            }
            else{
                MapValueToIndex[nums[i]] = i;
            }
        }
        return{};
    }
};
