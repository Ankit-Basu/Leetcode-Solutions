class Solution {
    public boolean isPowerOfTwo(int num) {
        if (num<=0) return false;
        else if((num & num-1) == 0) return true;
        else return false;
    }
}