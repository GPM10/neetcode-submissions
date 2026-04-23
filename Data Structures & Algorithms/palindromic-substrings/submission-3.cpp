class Solution {
public:
    int res=0;
    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++){
            
                res+=palindrome(s,i,i);
            
            
                res+=palindrome(s,i,i+1);
            
        }
        return res;

        
    }
    int palindrome(string s,int l,int r){
        int  count=0;
        while(l>=0&&r<s.size()&&s[l]==s[r]){
            
            count++;
            l--;
            r++;

        }
        return count;
    }
    

    
};
