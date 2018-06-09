/*
371. Sum of Two Integers

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3.

*/

class Solution{
public:
	int getSum(int a, int b){
		if (b == 0)
			return a;
		while (a != 0){
			int temp = (a^b);
			b = (a & b)<<1;
			a = temp;
		}
		return b;
	}
}