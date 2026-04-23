class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int res=0;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                res++;
                i++;

            }
            j++;
        }
        return i==s.size();

    }
};