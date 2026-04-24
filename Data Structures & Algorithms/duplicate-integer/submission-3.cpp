class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>res(nums.begin(),nums.end());
        if(res.size()<nums.size()){
            return true;
        }
        return false;

        
    }
};