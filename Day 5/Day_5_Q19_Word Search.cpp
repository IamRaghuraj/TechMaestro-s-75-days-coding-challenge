#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cols;
    int rows;
    bool checking(vector<vector<char>>& board, string word, int curridx, int x, int y){
        char curr = board[x][y];
        bool result = false;
        if (curr != word[curridx]) 
            return result;
        if (word.size() == curridx+1) 
            return true;
        //Temp placeholder so that already counted word can't be taken again
        board[x][y] = '*';
        //Can't use if else because all 4 directions need to be checked
        if (x>0 && checking(board, word, curridx+1, x-1, y))  
            result = true;
        if (!result && y>0 && checking(board, word, curridx+1, x, y-1))  
            result = true;
        if (!result && y<rows-1 && checking(board, word, curridx+1, x, y+1))  
            result = true;
        if (!result && x<cols-1 && checking(board, word, curridx+1, x+1, y))  
            result = true;
        
        board[x][y] = curr;
        return result;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        cols = board.size();
        rows = board[0].size();
        if (word.size() > cols * rows) 
            return false;//Too small for string
        
        for (int i = 0; i < cols; i++)
            for (int j = 0; j < rows; j++)
                if (checking(board, word, 0, i, j)) 
                    return true;

        return false;
    }
};