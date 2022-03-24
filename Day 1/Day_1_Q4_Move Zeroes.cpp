#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = nums.size()-1;
        int i=0;
        while(i<=k){
            if(nums[i]==0){
                int j =i+1;
                for(;j<=k;j++){
                    nums[j-1]=nums[j];
                }
                nums[k]=0;
                k--;
            }
            else{
                i++;
            }
        }
    }
};