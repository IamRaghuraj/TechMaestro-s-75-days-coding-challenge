#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();        
        vector<int> prefixSum(n); 
        prefixSum[0] = arr[0];
        for(int i=1;i<n;i++){
            prefixSum[i] = arr[i] + prefixSum[i - 1];
        }
        map<int,int> mp; 
        int ans = 0; 
        for(int i = 0; i < n; i++) {
            if(prefixSum[i] == k) 
                ans++;
            if(mp.find(prefixSum[i] - k) != mp.end())
                ans += mp[prefixSum[i] - k]; 
            mp[prefixSum[i]]++; 
        }
        return ans; 
    }
};