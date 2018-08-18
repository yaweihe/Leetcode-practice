/*
Given an array of size n, find the majority element. The majority element 
is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:
Input: [3,2,3]
Output: 3

Example 2:
Input: [2,2,1,1,1,2,2,]
Output: 2
*/

// hash table 将每个数字放在哈希表中，记数，知道某个数的count> n/2. 时间复杂度o(n)
// 排序： 因为众数是出现次数大于n/2的数字，所以排序之后中间的那个数字一定是众数。即nums[n/2]为众数。时间复杂度即排序的时间复杂度。
/* 分治法： 分治法是将整个问题化简为一个一个的小问题去解，将数组分成简单的几部分，比如讲一组数分为两部分，第一部分的众数如果等于第二部分的众数，则这个数就是上一层那一组的众数，
如果第一部分不等于第二部分，则遍历这一组数，记录这两个数的出现频率，返回为频率最大的，如果频率相同，返回谁都无所谓，因为在这里众数x肯定存在的，那么肯定会有至少两个x相连，如果不相连的话，那最后一个数字肯定是众数x。

*/
{1,2,1,3,1,2,1,2}
class Solution{
public:
	int majorityElement(vector<int> &nums){
		int res = 0, counts = 0;
		for(int x : nums){
			if(counts == 0){
				res = x;
				counts = 1;
			}
			else if (res == x) ++counts;
			else --counts;
		}
		return res;

	}
}



/*
	//
 	int majorityElement(vector<int> &nums){
		map<int,int> M;
		map<int, int>::iterator it;
		int num = nums.size();
		for(int i =0; i < num; ++i){
			it = M.find(nums[i]);
			if(it == M.end()) M.insert(map<int,int>::value_type(nums[i]. 1));
			else it->second++;
			if((it->second) > num/2) return it->first;
		}
		return nums[0];
 	}
*/




{1,2,1,3,1,2,1,2}

	int majorityElement(vector<int> &nums){
		int res = 0, count = 0;
		for(int num : nums){
			
			if(count == 0){
				count = 1;
				res = num;
			}
			else if(num == res ) ++count;
			else --count;
		}

		return res;


	}