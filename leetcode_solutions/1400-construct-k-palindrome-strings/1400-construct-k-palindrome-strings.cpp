class Solution {
 public:
  bool canConstruct(string s, int k) {
    if (s.length() < k)
      return false;

    bitset<26> odd;

    for (const char c : s)
      odd.flip(c - 'a');

    return odd.count() <= k;
  }
};
