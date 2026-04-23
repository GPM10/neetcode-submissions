class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;


    }

        void mergesort(vector<int>&nums,int l,int r){
            
            if(l>=r){
                return;
            }
            int mid=l+(r-l)/2;
            mergesort(nums,l,mid);
            mergesort(nums,mid+1,r);
            merge(nums,l,mid,r);

        }
        void merge(vector<int>&nums,int l,int m,int r){
            vector<int>temp;
            int i=l,j=m+1,k=0;
            while(i<=m&&j<=r){
                if(nums[i]<nums[j]){
                    temp.push_back(nums[i]);
                    i++;
                }
                else{
                    temp.push_back(nums[j]);
                    j++;
                }
            

            }
            while(i<=m){
                temp.push_back(nums[i++]);
            }
            while(j<=r){
                temp.push_back(nums[j++]);
            }
            for(int i=l;i<=r;i++){

         nums[i]=temp[i-l];
        }
        }
        



        
    
};