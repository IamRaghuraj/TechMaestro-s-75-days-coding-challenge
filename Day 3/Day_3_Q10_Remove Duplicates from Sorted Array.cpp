#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = nums.size();
        for(int i=0;i<nums.size() && i < idx;i++){
            int key = nums[i];
            int count = 0;
            for(int j = i+1;j<nums.size() && j < idx;j++){
                if(key == nums[j])
                    count++;
                else
                    break;
            }
            if(count>0){
                int k = i+1;
                for(int p = i + count + 1; p < idx ; p++){
                    nums[k] = nums[p];
                    k++;
                }
                idx = idx - count;
            }
        }
        return idx;
    }
};