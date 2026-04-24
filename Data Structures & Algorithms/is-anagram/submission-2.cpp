class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n){
            return false;
        }
        vector<int>res(26,0);
        for(int i=0;i<m;i++){
            res[s[i]-'a']++;
            res[t[i]-'a']--;

        }
        for(int num:res){
            if(num!=0){
                return false;
            }


        }
        return true;
        
    }
};
