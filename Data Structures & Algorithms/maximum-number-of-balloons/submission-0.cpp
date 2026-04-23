class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string bal="balloon";
        unordered_map<char,int>count_text;
        unordered_map<char,int>ball;
        for(char c:text){
          count_text[c]++;
        }
        for(char c:bal){
            ball[c]++;
        }
        int res=text.size();
        for(auto & entry:ball){
            char ch=entry.first;
            int count=entry.second;
            res=min(res,count_text[ch]/count);
        }
        return res;
        



        
    }
};