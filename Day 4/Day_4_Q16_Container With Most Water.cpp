#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxV = INT_MIN;
        int leftidx = 0;
        int rightidx = height.size()-1;
        while(leftidx < rightidx){
            maxV = max(maxV,min(height[leftidx],height[rightidx]) * (rightidx - leftidx));
            if(height[leftidx] > height[rightidx]){
               rightidx--; 
            }else{
                leftidx++;
            }
        }
        return maxV;
    }
};