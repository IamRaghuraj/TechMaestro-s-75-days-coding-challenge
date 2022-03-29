#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int leftcolstart,rightcolend,toprowstart,bottomrowend;
        leftcolstart = 0;
        rightcolend = matrix[0].size()-1;
        toprowstart = 0;
        bottomrowend = matrix.size()-1;
        
        vector<int> a;
        int rotation = 0;
        char choice= 'r';
        while(toprowstart <= bottomrowend && leftcolstart <= rightcolend){
            if(choice=='r'){
                for(int i=leftcolstart;i<=rightcolend;i++)
                    a.push_back(matrix[toprowstart][i]);
                toprowstart++;
                choice='d';
            }else if(choice=='d'){
                for(int i=toprowstart;i<=bottomrowend;i++)
                    a.push_back(matrix[i][rightcolend]);
                rightcolend--;
                choice='l';
            }else if(choice=='l'){
                for(int i=rightcolend;i>=leftcolstart;i--)
                    a.push_back(matrix[bottomrowend][i]);
                bottomrowend--;
                choice='u';
            }else if(choice=='u'){
                for(int i=bottomrowend;i>=toprowstart;i--)
                    a.push_back(matrix[i][leftcolstart]);
                leftcolstart++;
                choice='r';
            }
        }
        return a;
    }
};