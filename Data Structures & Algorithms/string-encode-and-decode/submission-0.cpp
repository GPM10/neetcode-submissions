class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto i:strs){
            res+=to_string(i.size())+'#'+i;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int n=s.size();
        int i=0;
        while(i<n){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i+1));
            i=j+1;
            j=i+length;
            result.push_back(s.substr(i,length));
            i=j;
        }
        return result;
    }
};
