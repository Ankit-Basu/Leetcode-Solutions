class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int leftp=1;
        int rightp=1;
        int ans=nums[0];

        for(int i=0; i<n;i++){
            leftp= leftp==0?1:leftp;
            rightp= rightp==0?1:rightp;
            
            leftp*= nums[i];
            rightp*=nums[n-1-i];
            ans= Math.max(ans, Math.max(leftp, rightp));
        }
        return ans;

    }
}