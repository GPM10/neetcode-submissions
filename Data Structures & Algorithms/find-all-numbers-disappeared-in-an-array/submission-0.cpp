class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>nums_1(nums.begin(),nums.end());
        vector<int>unseen;
        for(int i=1;i<=nums.size();i++){
            if(!(nums_1.count(i))){
                unseen.push_back(i);
            }

        }
        return unseen;
    }
};