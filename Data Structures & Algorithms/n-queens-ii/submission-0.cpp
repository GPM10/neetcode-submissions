class Solution {
public:
    unordered_set<int>cols;
    unordered_set<int>posdiag;
    unordered_set<int>negdiag;
    int res=0;
    int totalNQueens(int n) {

        vector<string> board(n, string(n, '.'));
        dfs(0, n, board);
        return res;
    }

    void dfs(int r,int n,vector<string>& board){
        if(r==n){
            res++;
            return;
        }
        for(int c=0;c<n;c++){
            if(cols.count(c)||posdiag.count(r+c)||negdiag.count(r-c)){
                continue;
            }
        

        cols.insert(c);
        posdiag.insert(r+c);
        negdiag.insert(r-c);
        board[r][c]='Q';

        dfs(r+1,n,board);

        cols.erase(c);
        posdiag.erase(r+c);
        negdiag.erase(r-c);
        board[r][c]='.';

        }
    }
};
