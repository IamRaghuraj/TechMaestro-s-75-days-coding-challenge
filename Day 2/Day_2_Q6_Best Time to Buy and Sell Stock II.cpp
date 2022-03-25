#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        //Instead of looking for local minima and maxima we just check with the current stock 
        //price with yestarday's stock value 
        for(int i=1;i<prices.size();i++)
            if(prices[i] > prices[i-1])
                profit+= prices[i] - prices[i-1];
        return profit;
    }
};