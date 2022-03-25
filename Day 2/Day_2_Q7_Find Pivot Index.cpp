#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> leftSum(nums.size());
        vector<int> rightSum(nums.size());
        leftSum[0]=0;
        rightSum[nums.size()-1]=0;
        for(int i=1;i<nums.size();i++)
            leftSum[i]=nums[i-1]+leftSum[i-1];
        
        for(int i=nums.size()-2;i>=0;i--)
            rightSum[i]=nums[i+1]+rightSum[i+1];
        
        if(rightSum[0]==0)
            return 0;
        for(int i=0;i<nums.size();i++){
            if(leftSum[i]==rightSum[i])
                return i;
        }
        return -1;
    }
};