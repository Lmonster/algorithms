class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        auto helperFunc = [](vector<int>& n, int l, int r) {
            int tmp = 0;
            for (; l < r; ++l, --r) {
                tmp = n[l];
                n[l] = n[r];
                n[r] = tmp;
            }
        };
        int size = nums.size();
        helperFunc(nums, 0, size - 1);
        helperFunc(nums, 0, k % size - 1);
        helperFunc(nums, k % size, size - 1);
    }
};