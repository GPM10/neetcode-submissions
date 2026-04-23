class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int>count_1(26,0),count_2(26,0);

        for(int i=0;i<s1.size();i++){
            count_1[s1[i]-'a']++;
            count_2[s2[i]-'a']++;
        }
        if(count_1==count_2)return true;
        for(int i=s1.size();i<s2.size();i++){
            count_2[s2[i]-'a']++;
            count_2[s2[i-s1.size()]-'a']--;
            if(count_1==count_2)return true;
            
        }
        return false;

    }
};
