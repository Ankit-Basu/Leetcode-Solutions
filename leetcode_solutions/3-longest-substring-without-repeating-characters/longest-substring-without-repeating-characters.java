class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character>ch = new HashSet<>();
        int l=0;
        int maxLen = 0;
        for(int right=0;right<s.length();right++){
            while(ch.contains(s.charAt(right))){
                ch.remove(s.charAt(l));
                l++;

            }

            ch.add(s.charAt(right));
            maxLen = Math.max(maxLen , right-l+1);
        }
        return maxLen;
    }
}