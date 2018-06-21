/*
The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.

Example 1:

Input: 1
Output: "1"
Example 2:

Input: 4
Output: "1211"
*/


class Solution {
public:
    string countAndSay(int n) {
      	if(n == 1)
            return "1";
        string result = "1";
        for(int i = 1; i < n; ++i) {
            result = convert(result);
        }
        return result;
    }
    string convert(string str) {
        int len = str.length();
        if(len == 1) return "1" + str;
        string result;
        int count = 1;
        for(int i = 1; i < len; ++i) {
            if(str[i-1] == str[i]) count++;
            else {
                result = result + static_cast<char>(count + '0') + str[i-1];
                count = 1;
            }
            if(i == len - 1) 
                result = result + static_cast<char>(count + '0') + str[i];
        }
        return result;
    }
};