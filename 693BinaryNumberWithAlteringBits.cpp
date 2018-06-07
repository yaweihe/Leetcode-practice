/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

Example 1:
Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101

Example 2:
Input: 7
Output: False
Explanation:
The binary representation of 7 is: 111.

Example 3:
Input: 11
Output: False
Explanation:
The binary representation of 11 is: 1011.

Example 4:
Input: 10
Output: True
Explanation:
The binary representation of 10 is: 1010.
*/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        //method one
        /*
			int bit = -1;
			while(n > 0){
				if (n &1 == 1){
					if(bit ==1)
						return false;
					bit = 1;
				}
				else{
					if(bit == 0)
						return false;
					bit = 0;
				}
				n >>= 1;
			}
			return true;
        */

        /*
        	method two
        	n = 10101
        	n >> 1 = 1010
        	n + n>>1 = 11111
        	n + n>>1 + 1= 100000
        	(n + n>>1 + 1 )&(n+ n>>1) = 0;
        */
        return ((n + (n>>1) + 1) & (n + (n>>1))) == 0;


    }
};