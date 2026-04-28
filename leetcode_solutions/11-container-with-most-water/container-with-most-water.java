class Solution {
    public int maxArea(int[] height) {
        int l=0;
        int r= height.length-1;
        int ans=0;
        while(l<r){
            int ht = Math.min(height[l], height[r]);
            int w=(r-l);
            int ca=ht*w;
            ans = Math.max(ans,ca);
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
}