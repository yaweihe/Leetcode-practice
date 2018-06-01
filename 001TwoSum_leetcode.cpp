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
		vector<int> res;
		unsigned count = 0;
		for (unsigned i = 0; i < nums.size(); ++i){
			count++;
			for (unsigned j = i+1; j < nums.size(); ++j){
				if (nums.at(j) == target - nums.at(i)){
					res.push_back(i);
					res.push_back(j);
					//return res;
				}
			}
		}

		cout << res.empty() << endl;
		if (res.empty() == 1){
			res = nums;
		}
		return res;
	}
} sol;

int main(int argc, char const *argv[])
{
	vector<int> a1 = {2,7,11,15};
	int b1 = 19;
	int out;

	vector<int> p = sol.twoSum(a1,b1);

	ap == p ? out = 0 : out = 1;

	if (out == 0){
		cout << "no sum found" << endl;
	}

	else{
		for (unsigned i = 0; i< p.size(); i++){
			cout << p.at(i) <<endl;
		}
	}
	return 0;
}