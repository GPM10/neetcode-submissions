class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target){
   int rows=matrix.size();
        int cols=matrix[0].size();
        int top=0;
        int bottom=rows-1;
        while(top<=bottom){
            int mid=top+(bottom-top)/2;
            if(target>matrix[mid][cols-1]){
                top=mid+1;
            }
            else if(target<matrix[mid][0]){
                bottom=mid-1;
            }
            else{
                mid=top;
                break;
            }
            mid=top;
        }
        if(top>bottom){
            return false;
        }
        int mid=top+(bottom-top)/2;
        int l=0;
        int r=cols-1;
        while(l<=r){
            int middle=l+(r-l)/2;
            if(matrix[mid][middle]==target){
                return true;
            }
            else if(matrix[mid][middle]>target){
                r=middle-1;
            }
            else{
                l=middle+1;
            }
        }
        return false;

        

    }
};
