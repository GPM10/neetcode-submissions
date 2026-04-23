class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>count;
    for(int num:nums){
        count[num]++;

    }
    vector<vector<int>>freq(nums.size()+1);
    for(auto it:count){
        freq[it.second].push_back(it.first);
    }
    vector<int>result;
    for(int i=freq.size()-1;i>=0;i--){
        for(auto num:freq[i]){
            result.push_back(num);
            if(result.size()>=k){
                return result;
            }
        }

    }
    return result;
    

        
    }
};
