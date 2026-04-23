class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=board.size();
        int col=board[0].size();
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int,int>,unordered_set<char>>square;



        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                if(board[r][c]=='.'){
                    continue;}
                    pair<int,int>squareKey={r/3,c/3};
                    if(rows[r].count(board[r][c])||cols[c].count(board[r][c])||square[squareKey].count(board[r][c])){
                        return false;
                    }
                    rows[r].insert(board[r][c]);
                    cols[c].insert(board[r][c]);
                    square[squareKey].insert(board[r][c]);
                }

            }
            return true;
        }
        
        
    
};
