/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/

class Solution{
public:
	string longestCommonPrefix(vector<string>& strs){
		//纵向扫描，从位置0开始，对每一个位置比较所有字符串，直到遇到一个不匹配
		//时间复杂度o(n1+n2+...)
		if (strs.empty())
			return "";
		for(int i = 0; i <strs[0].size(); ++i){
			for(int j =1; j < strs.size(); ++j){
				if(strs[j][i] != strs[0][i])
					return strs[0].substr(0,i);
			}
		}
		return strs[0];
	}

		//横向扫描，每个字符串与第0个字符串，从左到右比较，直到遇到一个不匹配
		//然后继续下一个字符串
		//时间复杂度o（n1+n2+...)
		/*
		if (strs.empty()) return "";
		int right_most = strs[0].size() -1;
		for(size_t i = 1; i < strs.size(); i++){
			for(int j = 0; j <= right_most; j++){
				if(strs[i][j] != strs[0][j])
					right_most = j-1;
			}
		}
		return strs[0].substr(0,right_most + 1);
		
		*/
}