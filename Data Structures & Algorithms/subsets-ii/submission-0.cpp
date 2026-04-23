class Solution {
public:
    vector<int>subset;
    vector<vector<int>>res;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(0,nums);
        return res;
    }
    void dfs(int start,vector<int>&nums){
        res.push_back(subset);
        for(int i=start;i<nums.size();i++){
            if(i>start&&nums[i]==nums[i-1]){
                continue;
                
            }
            subset.push_back(nums[i]);
            dfs(i+1,nums);
            subset.pop_back();

        }
    }
};
