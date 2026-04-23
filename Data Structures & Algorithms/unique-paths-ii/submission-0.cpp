class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size()-1;
        int cols=obstacleGrid[0].size()-1;
        if(obstacleGrid[0][0]==1||obstacleGrid[rows][cols]==1){
            return 0;
        }
        obstacleGrid[rows][cols] = 1;
        for(int r=rows;r>=0;r--){
            for(int c=cols;c>=0;c--){
                
                if(r==rows&&c==cols){
                    continue;
                }
                if(obstacleGrid[r][c] == 1){
                  obstacleGrid[r][c] = 0;
                  continue;
                  }
                
                if(r==rows){
                 obstacleGrid[r][c]+=obstacleGrid[r][c+1];
                }
                else if(c==cols){
                   obstacleGrid[r][c]+=obstacleGrid[r+1][c]; 
                } 
                else{
                    obstacleGrid[r][c]+=obstacleGrid[r][c+1]+obstacleGrid[r+1][c];
                }
            }
        }
        return obstacleGrid[0][0];
        
    }
};