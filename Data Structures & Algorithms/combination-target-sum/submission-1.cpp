class Solution {
public:
    vector<int>subset;
    vector<vector<int>>res;
    int cur_sum=0;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        dfs(0,target,nums,cur_sum);
        return res;
        
    }
    void dfs(int start,int target,vector<int>&nums,int cur_sum){
        if(cur_sum==target){
            res.push_back(subset);
        }
        if(cur_sum>target){
            return;
        }
        for(int i=start;i<nums.size();i++){
            subset.push_back(nums[i]);
            dfs(i,target,nums,cur_sum+nums[i]);
            subset.pop_back();
        }
    }

};
