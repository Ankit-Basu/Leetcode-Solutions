### <h2><a href="https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k/">2311. Longest Binary Subsequence Less Than or Equal to K</a></h2>
<h3>Medium</h3>
<hr>

<p>You are given a binary string <code>s</code> and a positive integer <code>k</code>.</p>

<p>Return the length of the longest subsequence of <code>s</code> that makes up a binary number less than or equal to <code>k</code>.</p>

<p><strong>Note:</strong></p>
<ul>
  <li>The subsequence can contain leading zeroes.</li>
  <li>The empty string is considered to be equal to 0.</li>
  <li>A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.</li>
</ul>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "1001010", k = 5
<strong>Output:</strong> 5
<strong>Explanation:</strong> The longest subsequence of s that makes up a binary number ≤ 5 is "00010", which equals 2 in decimal.
Other valid options include "00100" (4) and "00101" (5), all of which are of length 5.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "00101001", k = 1
<strong>Output:</strong> 6
<strong>Explanation:</strong> "000001" is a valid subsequence equal to 1 in decimal.
Its length is 6.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s.length <= 1000</code></li>
  <li><code>s[i]</code> is either '0' or '1'</li>
  <li><code>1 <= k <= 10⁹</code></li>
</ul>
