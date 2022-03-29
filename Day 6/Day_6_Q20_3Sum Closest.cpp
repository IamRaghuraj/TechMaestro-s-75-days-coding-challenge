#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minV = 0;
        int diff = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int currsum = nums[i]+nums[left]+nums[right];
                if(currsum==target)
                    return target;
                else if(currsum > target){
                    right--;
                    if(abs(target-currsum) < diff){
                        diff = abs(target-currsum);
                        minV = currsum;    
                    }
                    
                }else{
                    left++;
                    if(abs(target-currsum) < diff){
                        diff = abs(target-currsum);
                        minV = currsum;    
                    }
                }
            }
        }
        return minV;
    }
};