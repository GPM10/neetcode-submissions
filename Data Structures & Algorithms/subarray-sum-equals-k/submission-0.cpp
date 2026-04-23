class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cur_sum=0;
        unordered_map<int,int>prefix_sum;
        int res=0;
        prefix_sum[0]=1;
        for(int num:nums){
            cur_sum+=num;
            int diff=cur_sum-k;
            res+=prefix_sum[diff];
            prefix_sum[cur_sum]++;

        }
        return res;
        
        
    }
};