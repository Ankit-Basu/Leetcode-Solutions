class Solution {
public:
    int hamming(const string& a, const string& b) {
        int count = 0;
        for (int i = 0; i < a.size(); ++i)
            if (a[i] != b[i]) count++;
        return count;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1); 
        vector<int> parent(n, -1); 

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] &&
                    words[i].size() == words[j].size() &&
                    hamming(words[i], words[j]) == 1) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        parent[i] = j;
                    }
                }
            }
        }

        int maxLen = 0, endIdx = 0;
        for (int i = 0; i < n; ++i) {
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                endIdx = i;
            }
        }

        vector<string> result;
        while (endIdx != -1) {
            result.push_back(words[endIdx]);
            endIdx = parent[endIdx];
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
