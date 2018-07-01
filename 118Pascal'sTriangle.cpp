/*
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/

//from left to right
// time O(n^2), space O(n)
class Solution{
public:
	vector<vector<int>> generate(int numRows){
		vector<vector<int>> result;
		if(numRows <= 0) return result;

		result.push_back(vecotr<int>(1,1));	//first row
		for(int i = 2; i <= numRows; ++i){
			vector<int> current(i,1);	//current row
			const vector<int> &prev = result[i-2]; //last row

			for(int j = 1; j < i-1; ++j){
				current[j] = prev[j-1] + prev[j];	//the sum of top left conner and top right conner
			}
			result.push_back(current);
		}
		return result;
	}
}

//from right to left
// time O(n^2), space O(n)

class Solution{
public:
	vector<vector<int>> generate(int numRows){
		vector<vector<int>> result;
		vector<int> array;

		for(int i = 1; i <= numRows; i++){
			for(int j = i-2; j > 0; j--){
				array[j] = array[j-1] + array[j];
			}
			array.push_back(1);
			result.push_back(array);
		}
		return result;
	}
};
