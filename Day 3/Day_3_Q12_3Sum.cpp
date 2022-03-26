#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<tuple<int,int,int>,int>mp;
        if(nums.size()<3)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int temp = 0 - nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k] == temp){
                    mp[make_tuple(nums[i],nums[j],nums[k])]++;
                }
                if(nums[j]+nums[k] > temp)
                    k--;
                else if(nums[j]+nums[k] < temp)
                    j++;
                else
                    k--;
            }
        }
        for(auto x:mp){
            auto t = x.first;
            ans.push_back({get<0>(t),get<1>(t),get<2>(t)});
        }
        return ans;
    }
};