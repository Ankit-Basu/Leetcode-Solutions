class Solution {
    const int MOD = 1000000007;
public:
    int countPartitions(vector<int>& nums, int k) {
        int n = nums.size();
        
        multiset<int> currNums;
        vector<int> ways(n + 1);    
        ways[0] = 1;                
        
        int l = 0;
        int r = 0;
        long long currWays = 1;     
        while(r < n){
            currNums.insert(nums[r]); 
            while((*currNums.rbegin()) - (*currNums.begin()) > k){ 
                currNums.erase(currNums.find(nums[l]));
                currWays -= ways[l];
                l++;
                
                if(currWays < 0) currWays += MOD;
            }
            ways[r + 1] = currWays; 
            currWays += ways[r + 1];  

            ways[r + 1] %= MOD; 
            currWays %= MOD;
           
            r++;                
        }
        return ways[n];
    }
};