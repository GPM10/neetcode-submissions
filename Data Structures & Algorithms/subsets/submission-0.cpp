class Solution {
public:
    vector<int>subset;
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        
        dfs(0, nums);
        return res;

    }
    void dfs(int start,vector<int>&nums){
        res.push_back(subset);
        for(int i=start;i<nums.size();i++){
            subset.push_back(nums[i]);
            dfs(i+1,nums);
            subset.pop_back();

        }
    }
};
