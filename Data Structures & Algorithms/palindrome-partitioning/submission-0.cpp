class Solution {
public:
    vector<vector<string>>res;
    vector<string>subset;
    vector<vector<string>> partition(string s) {
        dfs(0,s,subset,res);
        return res;
        
    }
    void dfs(int i,const string&s,vector<string>&subset,vector<vector<string>>&res){
        if(i==s.size()){
            res.push_back(subset);
            return;
        }
        for(int j=i;j<s.size();j++){
            if(palindrome(s,i,j)){
                subset.push_back(s.substr(i,j-i+1));
                dfs(j+1,s,subset,res);
                subset.pop_back();
            }
        }

    }
    bool palindrome(const string&s,int l,int r){
        
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
