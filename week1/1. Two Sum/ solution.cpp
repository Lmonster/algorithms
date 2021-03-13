class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> m;
        std::vector<int> result(2);
        for (int i = 0 ; i < nums.size(); ++i) {
            try {
                result[0] = m.at(target-nums[i]);
                result[1] = i;
                return result;
            } catch(...) {
                m[nums[i]] = i;
            }
        }
        return result;
    }
};