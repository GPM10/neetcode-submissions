class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=0;

        for(int i=1;i<=n;i++){
            total+=i;

        }
        int res=accumulate(nums.begin(),nums.end(),0);
        return total-res;
        

        
    }      
};
