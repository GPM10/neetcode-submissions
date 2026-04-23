class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int ans = 0;
        long long mid = 0;

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (mid * mid == x) {
                ans = mid;
                return ans;
            }
            else if (mid * mid > x) {
                r = mid - 1;
            }
            else {
                ans = mid;
                l = mid + 1;
            }
        }

        return ans;
    }
};
