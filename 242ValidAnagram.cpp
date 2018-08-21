/*
Given two strings s and t , write a function to determine if t is an anagram of s.


Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

Note: You may assume the string contains only lowercase alphabets.

Follow up: What if the inputs contain unicode characters? How would you adapt your solution to such case?
*/

class Solution{
public:
	bool isAnagram(string s, string t){
		if(s.length() != t.length()) return false;

		map<char,int> helper;
		for(int i = 0; i < s.length(); i++){
			helper[s[i]]++;
			helper[t[i]]--;
		}

		for(auto s : helper){
			if(s.second)
				return false;
		}
		return true;
	}
}


class Solution{
public:
	bool isAnagram(string s, string t){
		int a[128]{}, b[128]{};
		for(auto &c: s) ++a[c];
		for(auto &c: t) ++b[c];
		for(int i='a'; i <='z'; ++i){
			if(a[i]!= b[i]) return false;
		}
		return true;
}
};
