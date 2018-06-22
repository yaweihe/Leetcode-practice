/*
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2
Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
             the decimal part is truncated, 2 is returned.
*/

class Solution
{
public:
	int mySqrt(int x){
		/*二分法，迭代循环再x范围内找到中间值mid，然后判断mid*mid和x，如果
		mid>x/mid,说明这个数大了，保留左边，right = mid -1； 否贼保留右边，
		left = mid+1，直到left>right结束循环，返回left-1.因为当x》2时，x/2的平方一定大雨x
		不可能是平方根，右指针可以从x/2
		*/
		if(x < 0) return INT_MIN;
		if(x == 0) return 0;
		if(x == 1) return 1;
		const double eps = 1e-5;
		double left= 1, right = static_cast<double>(x) /2 +1;
		double mid;
		while(fabs(f(mid) -x) > eps){
			mid = left + ((right-left)/2);
			if(fabs(f(mid) - x) <=eps)return static_cast<double>(mid);
			else if(x- f(mid) > eps) left = mid;
			else if(f(mid) -x > eps) right = mid;
		}
		return left;
	}
	double f(double x){
		return x * x;
	}
	
};