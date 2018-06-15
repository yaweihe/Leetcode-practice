/*

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
*/

/*
	Ideas:
	push these characters into the stack successively
	judging the top element of the stack according with the current current element
	if true, pop it, otherwise push into the stack,
	finally determine if the stack is empty.
*/
class Solution{
	bool isValid(string s){
		stack<char> result;
		if (s.empty())
			return true;
		int n = s.length();
		for(int i=0; i < n; ++i){
			if(result.empty())
				result.push(s[i]);
			else if (result.top() == '(' && s[i] ==')' || result.top() == '[' && s[i] == ']' || result.top()=='{' && s[i]=='}')
				result.pop();
			else
				result.push(s[i]);
		}
		return result.empty();
	}
	/*
	stack<char> result;
	for(char&c : s){
		if(result.empty())
			result.push(c);
		switch(c){
			case '(':
			case '{':
			case '[': result.push(c);break;
			case ')': if(result.empty() || result.top() != '(')return false; else result.push(c);break;
			case '}': if(result.empty() || result.top() != '{')return false; else result.push(c);break;
			case ']': if(result.empty() || result.top() != '[')return false; else result.push(c);break;

		}
		return result.empty();
	}
	*/

}