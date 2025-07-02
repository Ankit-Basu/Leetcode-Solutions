### <h2><a href="https://leetcode.com/problems/find-the-original-typed-string-ii/">3333. Find the Original Typed String II</a></h2>
<h3>Hard</h3>
<hr>

<p>Alice is attempting to type a specific string on her computer. However, she tends to be clumsy and may press a key for too long, resulting in a character being typed multiple times.</p>

<p>You are given a string <code>word</code>, which represents the final output displayed on Alice's screen. You are also given a positive integer <code>k</code>.</p>

<p>Return the total number of possible original strings that Alice might have intended to type, if she was trying to type a string of size at least <code>k</code>.</p>

<p>Since the answer may be very large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> word = "aabbccdd", k = 7
<strong>Output:</strong> 5
<strong>Explanation:</strong> The possible strings of length ≥ 7 are:
"aabbccdd", "aabbccd", "aabbcdd", "aabccdd", "abbccdd".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> word = "aabbccdd", k = 8
<strong>Output:</strong> 1
<strong>Explanation:</strong> The only possible string is "aabbccdd".
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> word = "aaabbb", k = 3
<strong>Output:</strong> 8
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= word.length <= 5 * 10<sup>5</sup></code></li>
  <li><code>word</code> consists only of lowercase English letters.</li>
  <li><code>1 <= k <= 2000</code></li>
</ul>
