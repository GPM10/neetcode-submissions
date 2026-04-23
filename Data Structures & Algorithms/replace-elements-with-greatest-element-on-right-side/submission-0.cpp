class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int max_value=-1;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            ans[i]=max_value;
            max_value=max(arr[i],max_value);

        }
        return ans;
        
    }
};