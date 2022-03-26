#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //So we will be starting the loop from i = 1 and go till i = m - 1
        //And the value at ith index will be currArray[i] = prevArray[i] + prevArray[i-1]
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1)
            return ans;
        ans.push_back({1,1});
        vector<int> prevArray = {1,1};
        numRows -= 2;
        while(numRows>0){
            vector<int> temp = {1};
            for(int i=1;i<=prevArray.size()-1;i++)
                temp.push_back(prevArray[i] + prevArray[i-1]);
            temp.push_back(1);
            prevArray = temp;
            ans.push_back(temp);
            numRows--;
        }
        return ans;
    }
};