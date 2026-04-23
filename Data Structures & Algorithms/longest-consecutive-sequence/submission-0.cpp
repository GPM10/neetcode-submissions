class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>numset(nums.begin(),nums.end());
        for (int num:numset){
            if(!numset.count(num-1)){
                int length=1;
                while(numset.count(num+length)){
                    length++;
                }
                longest=max(longest,length);
            }


        }
        return longest;
    }
};
