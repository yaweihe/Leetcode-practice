/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/

class Solution {
public:
    string addBinary(string a, string b) {
        
        string result = " ";
        int c = 0;
        int i = a.size() -1;
        int j = b.size() -1;
        while( i >= 0 || j >= 0 || c == 1){
        	c += i >= 0 ? a[i--] -'0' : 0;	//c += a[i--],当超出a的范围，c+=0
        	c += j >= 0 ? b[j--] -'0' : 0;	//c += b[j--],当超出b的范围，c+=0
        	result = char(c %2 + '0') + result;
        	c /= 2; // c一旦等于2，就要进位

        }
        return result;

        /*
		string result;
        const size_t n = a.length() > b.length() ? a.length() : b.length();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        for(size_t i =0; i < n; ++i){
        	const int ai = i < a.size() ? a[i] - '0' : 0;
        	const int bi = i < b.size() ? b[i] - '0' : 0;
        	const int val = (ai + bi + carry) %2;
        	carry = (ai + bi + carry) /2;
        	result.insert(result.begin(), val + '0');
        }
        if (carry == 1){
        	result.insert(result.begin(), '1');
        }
        return result;
        */
    }
};