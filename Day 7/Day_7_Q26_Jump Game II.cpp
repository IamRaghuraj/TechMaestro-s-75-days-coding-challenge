#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
        int ans=1;
        int i=0;
        int n =nums.size();
        for(;i<nums.size();){
            if(i >= nums.size()-1 || i + nums[i] >= nums.size()-1)
                return ans;
            int maxV = INT_MIN;
            int end = nums[i] + i + 1;
            int reach = min(end,n);
            int index = -1;
            for(int j=i+1;j<reach;j++)
                if(maxV < nums[j]+j){
                    maxV = nums[j]+j;
                    index = j;
                }
            ans++;
            i=index;
        }
        return ans;
    }
};