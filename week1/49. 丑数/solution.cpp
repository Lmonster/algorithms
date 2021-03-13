class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums(n);
        nums[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        int idx = 1;
        while (idx < n) {
            int v2 = nums[i2] * 2;
            int v3 = nums[i3] * 3;
            int v5 = nums[i5] * 5;
            int cur = min(min(v2, v3), v5);
            if (cur == v2) {
                ++i2;
            } 
            if (cur == v3) {
                ++i3;
            }
            if (cur == v5) {
                ++i5;
            }
            nums[idx++] = cur;
        }
        return nums[n-1];
    }
};