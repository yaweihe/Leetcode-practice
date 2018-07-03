/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

Example 1:

Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
Example 2:

Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.

*/


//贪心法，分别找到价格最低和最高的一天，低进高出，注意最低的一天要在最高的一天之前

class Solution{
public:
	int maxProfit(vector<int> &prices){
		if(prices.size() < 2) return 0;
		int profit = 0; //差价，利润
		int cur_min = prices[0]; //当前最小

		for(int i = 1; i < prices.size(); ++i){
			profit = max(profit, prices[i] - cur_min);
			cur_min = min(cur_min, prices[i]);
		}
		return profit;
	}
};