#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto x:mp){
            if(x.second > floor(n/2)){
                ans = x.first;
                break;
            }       
        }
        return ans;
    }
};