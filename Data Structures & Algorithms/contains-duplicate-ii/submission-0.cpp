class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0,r=0;
        unordered_set<int>seen;
        for(int r=0;r<nums.size();r++){
            if (r-l>k){
                seen.erase(nums[l]);
                l++;
            }
            if(seen.count(nums[r])){
                return true;
            }
            seen.insert(nums[r]);
        }
        return false;
    }
};