### <h2><a href="https://leetcode.com/problems/longest-subsequence-repeated-k-times/">2014. Longest Subsequence Repeated k Times</a></h2>
<h3>Hard</h3>
<hr>

<p>You are given a string <code>s</code> of length <code>n</code>, and an integer <code>k</code>. Your task is to find the longest subsequence repeated <code>k</code> times in the string <code>s</code>.</p>

<p>A <strong>subsequence</strong> is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.</p>

<p>A subsequence <code>seq</code> is <strong>repeated k times</strong> in <code>s</code> if <code>seq * k</code> (the string formed by concatenating <code>seq</code> k times) is also a subsequence of <code>s</code>.</p>

<p>If there are multiple such longest subsequences, return the <strong>lexicographically largest</strong> one. If no such subsequence exists, return an empty string.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "letsleetcode", k = 2
<strong>Output:</strong> "let"
<strong>Explanation:</strong> Two valid longest subsequences repeated twice are "let" and "ete". "let" is lexicographically larger.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "bb", k = 2
<strong>Output:</strong> "b"
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> s = "ab", k = 2
<strong>Output:</strong> ""
<strong>Explanation:</strong> No subsequence is repeated twice.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>n == s.length</code></li>
  <li><code>2 <= n, k <= 2000</code></li>
  <li><code>2 <= n < k * 8</code></li>
  <li><code>s</code> consists of lowercase English letters.</li>
</ul>
