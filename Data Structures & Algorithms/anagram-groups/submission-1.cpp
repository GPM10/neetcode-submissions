class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>result;
        for(string s:strs){
            vector<int>res(26,0);
            for(char c:s){
                res[c-'a']++;

            }
            string key;
            //key+=res[0];
            for(int i=0;i<26;i++){
                key+=to_string(res[i])+",";
            }
            result[key].push_back(s);
            
        }
        vector<vector<string>>final;
        for(auto it:result){
            final.push_back(it.second);
        }
        return final;

    }
};
