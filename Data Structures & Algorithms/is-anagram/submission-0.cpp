class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>res(26,0);
        int s_length=s.size();
        int t_length=t.size();
        if(s_length!=t_length){
            return false;
        }
        for(int i=0;i<s_length;i++){
            res[s[i]-'a']++;
            res[t[i]-'a']--;

        }
        for(int val:res){
            if(val!=0){
                return false;

            }

        }
        return true;

    }
};
