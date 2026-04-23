class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=0;
        int height=0;
        int width=0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            while(!st.empty()&&(i==n||heights[st.top()]>=heights[i])){
                height=heights[st.top()];
                st.pop();
                if(!st.empty()){
                    width=i-st.top()-1;
                }
                else{
                    
                    width=i;
                }
                maxArea=max(maxArea,height*width);
            }
            st.push(i);
        }
        return maxArea;
        
    }
};
