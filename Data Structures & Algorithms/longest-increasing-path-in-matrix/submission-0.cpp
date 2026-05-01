class Solution {

vector<vector<int>> dp;
int dfs(vector<vector<int>>&matrix,int r,int c,int preval){
    int ROWS=matrix.size();
    int COLS=matrix[0].size();
    if(r<0||c<0||r>=ROWS||c>=COLS||matrix[r][c]<=preval){
        return 0;
    }
    if (dp[r][c] != -1) return dp[r][c];
    int res=1;
    res = 1 + max({
    dfs(matrix, r+1, c, matrix[r][c]),
    dfs(matrix, r-1, c, matrix[r][c]),
    dfs(matrix, r, c+1, matrix[r][c]),
    dfs(matrix, r, c-1, matrix[r][c])
});
    dp[r][c]=res;
    return res;
}


public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ROWS=matrix.size();
        int COLS=matrix[0].size();
        int res=0;
        int LIP=0;
        dp = vector<vector<int>>(ROWS, vector<int>(COLS, -1));
        for(int r=0;r<ROWS;r++){
            for(int c=0;c<COLS;c++){
            LIP=dfs(matrix,r,c,INT_MIN);
            res=max(res,LIP);
        }}
        return res;
        
    }
};
