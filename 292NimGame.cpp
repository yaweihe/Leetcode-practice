/*
You are playing the following Nim Game with your friend: 
There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. 
The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

Both of you are very clever and have optimal strategies for the game. 
Write a function to determine whether you can win the game given the number of stones in the heap.

Example:

Input: 4
Output: false 
Explanation: If there are 4 stones in the heap, then you will never win the game;
             No matter 1, 2, or 3 stones you remove, the last stone will always be 
             removed by your friend.
*/

/* 1 stone， get all of them 
   2 stones, get all of them
   3 stones, get all of them
   4 stones, you cann't win
   5 stones, get 1 stone let the your friend encounter the situation 4, you win
   6 stones, get 2 stones let the your friend encounter the situation 4, you win
   7 stones, get 3 stones let the your friend encounter the situation 4, you win
   8 stones, you can't win
*/

class Solution{
public:
	bool canWinNim(int n){
		if (n % 4 == 0)
			return false;
		return true;
	}
};