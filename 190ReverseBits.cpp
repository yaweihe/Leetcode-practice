/*
Reverse bits of a given 32 bits unsigned integer.

Example:

Input: 43261596
Output: 964176192
Explanation: 43261596 represented in binary as 00000010100101000001111010011100, 
             return 964176192 represented in binary as 00111001011110000010100101000000.

Follow up:
If this function is called many times, how would you optimize it?
*/


class Solution{
public:
	uint32_t reverseBits(uint32_t n){
		if(n == 0) return 0;
		vector<int> bits;
		for(int i =0; i < n; ++i){
			bits.push_back(n%2);
			n >>= 1;
		}
		uint32_t m =0;
		for(int j = 0; j<32; ++j){
			m = 2*m + bits[i];
		}
		return m;
	}
}


//通过右移n依次获取n的末位，设置为m的末尾，左移m实现颠倒

	/*
	uint32_t reverseBit(uint32_t n){
		uint32_t m = 0;
		while(n != 0){
			m <<= 1;
			m = m | (n & 1);
			n >>= 1;
		}
		return m;
	}
	
	*/
