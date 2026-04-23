class Solution {
public:
    string intToRoman(int num) {
        string res;
        vector<int> values = {
    1000, 900, 500, 400,
    100, 90, 50, 40,
    10, 9, 5, 4, 1
};

vector<string> symbols = {
    "M", "CM", "D", "CD",
    "C", "XC", "L", "XL",
    "X", "IX", "V", "IV", "I"
};

        int n= values.size();
        for(int i=0;i<n;i++){
            while (num>=values[i]){
                res+=symbols[i];
                num-=values[i];
            }

        }
        return res;

        
    }
};