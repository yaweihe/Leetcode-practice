/*

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
*/

class Solution{
public:
	bool isPalindrome(string s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		string ss;
		for(int i=0; i < s.size(); i++){
			if(isalpha(s[i]) || isdigit(s[i])){
				ss += s[i];
			}
		}
		s = ss;
		reverse(ss.begin(), ss.end());
		if(s == ss)
			return true;
		else
			return false;
	}
};