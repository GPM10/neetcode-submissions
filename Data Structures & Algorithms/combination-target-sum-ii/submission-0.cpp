class Solution {
public:
    vector<int>subset;
    vector<vector<int>>res;
    int cur_sum=0;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(0,candidates,cur_sum,target);
        return res;
        
    
    }

    void dfs(int start,vector<int>&candidates,int cur_sum,int target){
        if(cur_sum==target){
            res.push_back(subset);
            return;
        }
        if(cur_sum>target){
            return;
        }
        
        
        for(int i=start;i<candidates.size();i++){
            if(i>start&&candidates[i]==candidates[i-1]){
            continue;
           }
            subset.push_back(candidates[i]);
            dfs(i+1,candidates,cur_sum+candidates[i],target);
            subset.pop_back();
        }
    }
};
