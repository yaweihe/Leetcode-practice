/*
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will not be any extra space in the string.

*/

class Solution {
public:
    string reverseWords(string s) {
        if(s.length() == 0)
        	return s;
        string str;
        int re = 0;
        int i;
        for(i=0; i < s.length(); i++){
        	if(s[i] == ''){
        		for(int j = i-1; j>= res; j--){
        			str += s[j];
        		}
        		re = i+1;
        		str += '';
        	}
        }
        for(i = s.length()-1; i >= re; i--)
        	str += s[i];
        return str;
       }

};