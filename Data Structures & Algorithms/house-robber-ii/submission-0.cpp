class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int>nums_1(nums.begin()+1,nums.end());
        vector<int>nums_2(nums.begin(),nums.end()-1);
        return max(nums[0],max(helper(nums_1),helper(nums_2)));

        
    }
    int helper(vector<int>&nums){
        int rob_1=0;
        int rob_2=0;
        for(int num:nums){
            int temp=max(rob_1,num+rob_2);
            rob_2=rob_1;
            rob_1=temp;
        }
        return rob_1;
    }

};
