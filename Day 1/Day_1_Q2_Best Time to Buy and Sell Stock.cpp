#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        vector<int> maxArray(prices.size());
        maxArray[prices.size()-1] = prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]>maxArray[i+1])
                maxArray[i]=prices[i];
            else
                maxArray[i]=maxArray[i+1];
        }
        //We have maxElement for each index now
        for(int i=0;i<prices.size()-1;i++)
            if((maxArray[i]-prices[i]) > maxProfit)
                maxProfit = maxArray[i]-prices[i];
        return maxProfit;
    }
};