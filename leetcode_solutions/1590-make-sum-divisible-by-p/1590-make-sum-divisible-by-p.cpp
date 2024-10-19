class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int total_sum = 0;
        for (int num : nums) total_sum = (total_sum + num) % p;
        if (total_sum == 0) return 0;
        
        unordered_map<int, int> prefix_map;
        prefix_map[0] = -1;
        int prefix_sum = 0, result = nums.size();
        
        for (int i = 0; i < nums.size(); ++i) {
            prefix_sum = (prefix_sum + nums[i]) % p;
            int target = (prefix_sum - total_sum + p) % p;
            if (prefix_map.find(target) != prefix_map.end()) {
                result = min(result, i - prefix_map[target]);
            }
            prefix_map[prefix_sum] = i;
        }
        return result == nums.size() ? -1 : result;
    }
};