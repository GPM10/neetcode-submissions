class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size()-1;
        int cols=grid[0].size()-1;
        for(int r=rows;r>=0;r--){
            for(int c=cols;c>=0;c--){
                if(r==rows&&c==cols){
                    continue;
                }
                else if(r==rows){
                    grid[r][c]+=grid[r][c+1];
                }
                else if(c==cols){
                    grid[r][c]+=grid[r+1][c];
                }
                else{
                grid[r][c]+=min(grid[r+1][c],grid[r][c+1]);
                }
            }
        }
        return grid[0][0];
        
    }
};