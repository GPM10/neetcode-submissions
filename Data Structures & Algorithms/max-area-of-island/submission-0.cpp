class Solution {
public:
    int max_area=0;
    int rows=0;
    int cols=0;
    int dfs(int r,int c, vector<vector<int>>&grid){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]==0){
            return 0;
        }
        grid[r][c]=0;
        
        return 1+dfs(r+1,c,grid)+dfs(r-1,c,grid)+dfs(r,c-1,grid)+dfs(r,c+1,grid);


    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
     rows=grid.size();
     cols=grid[0].size();
     int area=0;
     for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(grid[r][c]==1){
            area=dfs(r,c,grid);
            max_area=max(area,max_area);
            }
        }
     }
     return max_area;
        
    }

    
};
