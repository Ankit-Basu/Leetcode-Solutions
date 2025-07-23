<h2><a href="https://leetcode.com/problems/maximum-score-from-removing-substrings/">1717. Maximum Score From Removing Substrings</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given a string <code>s</code> and two integers <code>x</code> and <code>y</code>. You can perform two types of operations any number of times:</p>
<ul>
  <li>Remove substring <code>"ab"</code> and gain <code>x</code> points.</li>
  <li>Remove substring <code>"ba"</code> and gain <code>y</code> points.</li>
</ul>

<p>Return the maximum points you can gain after applying the above operations on <code>s</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s = "cdbcbbaaabab", x = 4, y = 5
<strong>Output:</strong> 19
<strong>Explanation:</strong> 
- Remove "ba" from "cdbcbbaaabab" → "cdbcbbaaab" (+5)
- Remove "ab" from "cdbcbbaaab" → "cdbcbbaa" (+4)
- Remove "ba" from "cdbcbbaa" → "cdbcba" (+5)
- Remove "ba" from "cdbcba" → "cdbc" (+5)
Total = 5 + 4 + 5 + 5 = 19
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> s = "aabbaaxybbaabb", x = 5, y = 4
<strong>Output:</strong> 20
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; s.length &le; 10<sup>5</sup></code></li>
  <li><code>1 &le; x, y &le; 10<sup>4</sup></code></li>
  <li><code>s</code> consists of lowercase English letters.</li>
</ul>
</div>
