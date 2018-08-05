/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Example 1:

Input: 11
Output: 3
Explanation: Integer 11 has binary representation 00000000000000000000000000001011 
Example 2:

Input: 128
Output: 1
Explanation: Integer 128 has binary representation 00000000000000000000000010000000

*/


//将n不断右移，并与1想&得到的1的个数；
class Solution{
public:
	int hammingWeight(uint32_t n){
		int count = 0;
		while(n){
			if(n & 1){
				count++;
			}
			n >> 1;
		}
		return count;
	}
}

// 使用n&（n -1) 
// 假使 n =0x110101
/*
               n              n-1            n&(n-1)

	step1:   110101          110100          110100

	step2:   110100          110011          110000

	step3:   110000          101111          100000

	step4:   100000          011111          000000

发现有几个1，就循环几次n&(n-1)得到0，较于上者运行效率更高些。
*/

class Solution{
public:
	int hammingWeight(uint32_t n){
		int count = 0;
		while(n){
			n &= (n-1);
			++ count;
		}
		return count;
	}
};
