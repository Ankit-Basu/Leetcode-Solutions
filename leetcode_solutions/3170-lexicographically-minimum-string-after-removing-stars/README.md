### <h2><a href="https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/">3170. Lexicographically Minimum String After Removing Stars</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> which may contain any number of <code>'*'</code> characters. Your task is to remove all <code>'*'</code> characters using the following operation repeatedly while there is at least one <code>'*'</code>:</p>

<ul>
  <li>Find the leftmost <code>'*'</code> in <code>s</code>.</li>
  <li>Delete it and the smallest non-<code>'*'</code> character to its left. If there are multiple smallest characters, you may delete any of them.</li>
</ul>

<p>Return the <strong>lexicographically smallest</strong> resulting string after removing all <code>'*'</code> characters.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "aaba*"
<strong>Output:</strong> "aab"
<strong>Explanation:</strong>
The leftmost '*' is at index 4. The characters to the left are 'a', 'a', 'b', 'a'.
The smallest among them is 'a'. Removing this 'a' and '*' gives "aab".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "abc"
<strong>Output:</strong> "abc"
<strong>Explanation:</strong>
There is no '*' character, so no deletions are performed.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s.length <= 10<sup>5</sup></code></li>
  <li><code>s</code> consists only of lowercase English letters and <code>'*'</code>.</li>
  <li>The input is guaranteed to be such that it is always possible to delete all <code>'*'</code> characters as per the rule.</li>
</ul>
</div>
