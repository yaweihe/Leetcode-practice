/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.
*/



class Solution{
public:
	int HammingDistance(int x, int y){
        int temp = x^y, cnt = 0;
        while(temp != 0){
            if(temp &1){
                cnt++;
            }
            temp >>= 1;
        }
        return cnt;
	}
}
