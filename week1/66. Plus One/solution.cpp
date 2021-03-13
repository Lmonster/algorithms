class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        int size = digits.size();
        int sum = digits[size - 1] + 1;
        digits[size - 1] = sum % 10;
        carry = sum >= 10;
        for (int i = size - 2; i >= 0; --i) {
            if (!carry) {
                return digits;
            }
            sum = digits[i] + 1;
            digits[i] = sum % 10;
            carry = sum >= 10;
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};