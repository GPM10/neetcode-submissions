class Solution {
public:
    vector<vector<int>>res;
    vector<int>subset;
    vector<vector<int>> combine(int n, int k) {
        dfs(1,n,k);
        return res;
    }
    void dfs(int start ,int n,int k){
        if(subset.size()==k){
            res.push_back(subset);
            return;
        }
        for(int i=start;i<=n;i++){
            subset.push_back(i);
            dfs(i+1,n,k);
            subset.pop_back();
        }
    }

};