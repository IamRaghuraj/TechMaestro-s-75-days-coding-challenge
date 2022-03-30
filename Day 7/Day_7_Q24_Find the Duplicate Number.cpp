#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1)
                return nums[i];
        }
        return -1;
        //We can use the boyer-moore algorithm because we need to find that element with
        //value at least floor(n/2)
    }
};