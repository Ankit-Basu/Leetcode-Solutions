class Solution {
    public boolean isAnagram(String str1, String str2) {

        str1= str1.replace(" ","");
        str2=str2.replace(" ","");

        int[] count = new int[26];

        for(int i=0;i<str1.length();i++){
            count[str1.charAt(i)-'a']++;
        }
        for(int i=0;i<str2.length();i++){
            count[str2.charAt(i)-'a']--;
        }

        for(int i=0;i<count.length;i++){
            if(count[i]!=0) return false;
        }
        return true;
    }
}