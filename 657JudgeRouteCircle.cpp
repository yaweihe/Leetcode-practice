/*
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, 
which means it moves back to the original place.
The move sequence is represented by a string. And each move is represent by a character. 
The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true

Example 2:
Input: "LL"
Output: false
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int length = moves.length();
        int x =0, y = 0;
        char temp;
        for(int i =0; i < length; ++i)
        {
        	temp = moves.at(i);
        	if (temp == 'U')
        	{
        		y++;
        	}
        	else if (temp == 'D')
        	{
        		y--;
        	}
        	else if (temp == 'L')
        	{
        		x--;
        	}
        	else if (moves[i] == 'R')
        	{
        		x++;
        	}
        	else
        	{
        		return "Invalid parameter."
        	}


        }
        return x==0 && y==0;
        
    }
};