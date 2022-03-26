#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a, const vector<int> &b){ return a[0] < b[0];});
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++){
            if(start > intervals[i][1] && start > intervals[i][0])
                ans.push_back({intervals[i][0],intervals[i][1]});
            else if(end < intervals[i][0]){
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }else if(end >= intervals[i][0]){
                //Check for the end
                if(end < intervals[i][1]){
                    end = intervals[i][1];
                }
                
                //Check for the start as well
                if(start > intervals[i][0])
                    start = intervals[i][0];
            }
        }
        //Add the last element
        ans.push_back({start,end});
            
        return ans;
    }
};