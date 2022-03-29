#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int total_swap = n / 2;
        for (int i = 0; i < total_swap; i++) {
            int len_currstrip = n - 2 * i - 1;
            int opploc = n - 1 - i;
            for (int j = 0; j < len_currstrip; j++) {
                int temp = matrix[i][i+j];
                matrix[i][i+j] = matrix[opploc-j][i];
                matrix[opploc-j][i] = matrix[opploc][opploc-j];
                matrix[opploc][opploc-j] = matrix[i+j][opploc];
                matrix[i+j][opploc] = temp;
            }
        }
    }
};