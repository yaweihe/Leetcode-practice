/*
GIven a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
Example 1:

Input: "A"
Output: 1
Example 2:

Input: "AB"
Output: 28
Example 3:

Input: "ZY"
Output: 701
*/

class Solution{
public:
	int titleToNumber(string s){
		if(s.empty())
			return 0;
		int sum = 0;
		int tmp = 0;
		for(int i = 0; i < s.length(); ++i){
			tmp = s[i] -'A' +1;
			sum = 26 * sum + tmp;
		}
		return sum;
		
	}
}