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

/*
def HammingDistance(s1,s2):
	if len(s1) != len(s2):
		raise ValueError("Undefined for sequence of unequal length")
	return sum(el1 != el2 for el1, el2 in zip(s1,s2))

*/

class Solution{
public:
	int HammingDistance(int x, int y){
		
		if(x.size() != y.size()){
			throw ("Undefined for sequence of unequal length")
		}
		int z = x^y;
		int count =0;
		while(z){
			count++;
			z &= z-1;
		}
		
		return count;
	}
}