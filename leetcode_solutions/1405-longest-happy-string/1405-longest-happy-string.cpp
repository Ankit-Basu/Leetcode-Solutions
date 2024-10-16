class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string result;
        vector<pair<int, char>> counts = {{a, 'a'}, {b, 'b'}, {c, 'c'}};
        
        while (true) {
            sort(counts.begin(), counts.end(), greater<pair<int, char>>());
            bool added = false;
            
            for (auto& [count, ch] : counts) {
                int n = result.size();
                if (count == 0) continue;
                if (n >= 2 && result[n-1] == ch && result[n-2] == ch) continue;
                
                result += ch;
                count--;
                added = true;
                break;
            }
            
            if (!added) break;
        }
        
        return result;
    }
};