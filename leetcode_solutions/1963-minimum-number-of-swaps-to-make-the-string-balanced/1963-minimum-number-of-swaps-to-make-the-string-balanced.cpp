class Solution {
public:
   int minSwaps(string s) {
       int unmatched = 0;
       int swaps = 0;
       
       for (char c : s) {
           if (c == '[') {
               unmatched++;
           } else {
               unmatched--;
           }
           
           if (unmatched < 0) {
               swaps++;
               unmatched = 1;
           }
       }
       
       return swaps;
   }
};