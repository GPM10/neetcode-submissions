class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones=0;
        int ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones+=1;
                max_ones=max(ones,max_ones);
            }
            
            else{
                ones=0;
            }
        }

        return max_ones;
    }
};