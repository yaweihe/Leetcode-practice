/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
*/

class Solution{
public:
	int lengthOfLastWort(string s){
		return lengthOfLastWort(s.c_str());
	}


	int lengthOfLastWort(const char *s){
		int length = s.length();
		if(length == 0)return 0;
		int sum = 0;
		while(*s){
			if(*s++ != ' '){
				++sum;
			}
			else if(*s && *s != ' ')
				sum = 0;
		}
		return sum;
	}
	
};