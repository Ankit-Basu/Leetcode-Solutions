class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int max_k = (1 << maximumBit) - 1;
        vector<int> result;
        int cumulative_xor = 0;
        for (int num : nums) cumulative_xor ^= num;
        for (int i = nums.size() - 1; i >= 0; --i) {
            result.push_back(cumulative_xor ^ max_k);
            cumulative_xor ^= nums[i];
        }
        return result;
    }
};
