class Solution {
    long long getPalindrome(int half, bool odd) {
        long long n = half, tmp = half;
        if (odd) tmp /= 10;
        while (tmp) {
            n = n * 10 + tmp % 10;
            tmp /= 10;
        }
        return n;
    }
    bool isPalindromeBaseK(long long n, int k) {
        string s;
        while (n) {
            s += '0' + n % k;
            n /= k;
        }
        int i = 0, j = s.size() - 1;
        while (i < j && s[i] == s[j]) ++i, --j;
        return i >= j;
    }
public:
    long long kMirror(int k, int n) {
        long long ans = 0;
        for (int len = 1; true; ++len) {
            for (int half = pow(10, len - 1); half < pow(10, len); ++half) {
                auto pal = getPalindrome(half, true);
                if (isPalindromeBaseK(pal, k)) {
                    ans += pal;
                    if (--n == 0) return ans;
                }
            }
            for (int half = pow(10, len - 1); half < pow(10, len); ++half) {
                auto pal = getPalindrome(half, false);
                if (isPalindromeBaseK(pal, k)) {
                    ans += pal;
                    if (--n == 0) return ans;
                }
            }
        }
    }
};