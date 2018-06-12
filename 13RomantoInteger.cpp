/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

Input: "III"
Output: 3

Example 2:

Input: "IV"
Output: 4
Example 3:

Input: "IX"
Output: 9
Example 4:

Input: "LVIII"
Output: 58
Explanation: C = 100, L = 50, XXX = 30 and III = 3.
Example 5:

Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

class Solution {
public:
    int romanToInt(string s) {
    	if (s.empty())
    		return 0;
        int tagVal[256];  
        tagVal['I'] = 1;  
        tagVal['V'] = 5;  
        tagVal['X'] = 10;  
        tagVal['C'] = 100;  
        tagVal['M'] = 1000;  
        tagVal['L'] = 50;  
        tagVal['D'] = 500;  
        int val = 0;
        for(int i =0; i < s.length(); i++){
        	if(i+1 >= s.length || tagVal[s[i+1]] <= tagVal[s[i]])
        		val += tagVal[s[i]];
        	else
        		val -= tagVal[s[i]];
        }
        return val;
    }
};

/*
 IntToRoman
 
 string intToRoman(int num){
            if(num <= 0) return " ";
            stirng res = " ";
            static int number[13] = {1000, 900, 500, 400, 100,90, 50, 40, 10, 9, 5, 4, 1};
            static string flags[13] = {"M","CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
 
            for(int i = 0; i < 13 && num > 0; i++){
                if(num < number[i])continue;
                while(num >= number[i]){
                    num -= number[i];
                    res += flags[i];
                }
            }
        return res;
    }
 */
