class Solution {
public:
    long long minEnd(int n, int x) {
        if (n == 1) return x;
        
        long long curr = x;
        for (int i = 1; i < n; i++) {
            curr = ((curr | x) + 1) | x;
        }
        
        return curr;
    }
};