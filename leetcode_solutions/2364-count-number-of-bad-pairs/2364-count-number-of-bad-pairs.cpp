class Solution {
    public:
     long long countBadPairs(vector<int>& nums) {
       long ans = 0;
       unordered_map<int, int> count;  
   
       for (int i = 0; i < nums.size(); ++i)
         ans += i - count[nums[i] - i]++;
   
       return ans;
     }
   };