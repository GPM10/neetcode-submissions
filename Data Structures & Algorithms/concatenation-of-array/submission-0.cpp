class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>num(2*n,0);
        for(int i=0;i<n;i++){
            num[i]=num[i+n]=nums[i];

        }

        return num;
    }
};