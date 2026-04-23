class Solution {
public:
    vector<vector<int>>res;
    vector<int>subset;
    vector<bool>pick;
   
    vector<vector<int>> permute(vector<int>& nums) {
        pick.resize(nums.size(), false);
        dfs(subset,nums);
        return res;
    }
    void dfs(vector<int>&subset,vector<int>&nums){
        if(subset.size()==nums.size()){
            res.push_back(subset);
        }
        for(int i=0;i<nums.size();i++){
            if(pick[i]){
                continue;
            }
            
            pick[i]=true;
            subset.push_back(nums[i]);
            dfs(subset,nums);
            subset.pop_back();
            pick[i]=false;
        }
    }
};
