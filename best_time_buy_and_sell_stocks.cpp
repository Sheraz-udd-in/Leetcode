#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0],profit = 0;
        for(int i=1;i<n;i++){
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]); // Update the minimum price seen so far
        }
        return profit;
    }
};