class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroes=0;
        int max_length=0;
        int r=0,l=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                zeroes++;
            }
            while(zeroes>k){
                if(nums[l]==0){
                    zeroes--;

                }
            
            l++;
            
            }
            max_length=max(max_length,r-l+1);
            
        }
        return max_length;
    }
};