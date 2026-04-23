class Solution {
public:
    bool isPalindrome(string s) {
       int l=0;
       int r=s.size()-1;
       while(l<r){
        while(l<r&&!valid(s[l])){
            l++;

        }
        while(r>l&&!valid(s[r])){
            r--;
        }
        if(tolower(s[l])!=tolower(s[r])){
            return false;
        }
        l++;
        r--;
       }
       return true;
    }
    bool valid(char t){
        return (('A'<=t && t<='Z')||
        ('a'<=t && t<='z')||
        ('0'<=t && t<='9'));
    }
};
