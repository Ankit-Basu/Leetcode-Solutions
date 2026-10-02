class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer>count = new HashMap<>();
        count.put(0,1);
        int result = 0;
        int prefixSum = 0;
        for(int num:nums){
            prefixSum+=num;
            if(count.containsKey(prefixSum - k)){
                result+= count.get(prefixSum - k);
            }
            count.put(prefixSum, count.getOrDefault(prefixSum , 0)+1);
        }
        return result;
    }
}