class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length = INT_MAX;
        int sum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                min_length = min(min_length, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return min_length == INT_MAX ? 0 : min_length;
    }
};
