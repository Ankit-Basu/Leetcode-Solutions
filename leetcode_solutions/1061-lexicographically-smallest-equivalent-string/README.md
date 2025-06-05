### <h2><a href="https://leetcode.com/problems/lexicographically-smallest-equivalent-string/">1061. Lexicographically Smallest Equivalent String</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given two strings of the same length <code>s1</code> and <code>s2</code>, and a third string <code>baseStr</code>.</p>

<p>We say characters <code>s1[i]</code> and <code>s2[i]</code> are <strong>equivalent</strong>.</p>

<p>Equivalence is an equivalence relation, meaning:</p>
<ul>
  <li><strong>Reflexivity</strong>: 'a' is equivalent to 'a'.</li>
  <li><strong>Symmetry</strong>: if 'a' is equivalent to 'b', then 'b' is equivalent to 'a'.</li>
  <li><strong>Transitivity</strong>: if 'a' is equivalent to 'b' and 'b' is equivalent to 'c', then 'a' is equivalent to 'c'.</li>
</ul>

<p>Using this equivalence information, your task is to return the <strong>lexicographically smallest equivalent string</strong> of <code>baseStr</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s1 = "parker", s2 = "morris", baseStr = "parser"
<strong>Output:</strong> "makkek"
<strong>Explanation:</strong>
Equivalence groups are:
[m, p], [a, o], [k, r, s], [e, i]
Using the smallest letter in each group, "parser" → "makkek".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s1 = "hello", s2 = "world", baseStr = "hold"
<strong>Output:</strong> "hdld"
<strong>Explanation:</strong>
Groups are: [h, w], [d, e, o], [l, r]
"hold" → "hdld"
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> s1 = "leetcode", s2 = "programs", baseStr = "sourcecode"
<strong>Output:</strong> "aauaaaaada"
<strong>Explanation:</strong>
Groups are: [a, o, e, r, s, c], [l, p], [g, t], [d, m]
Most characters map to 'a', except 'u' and 'd'.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s1.length, s2.length, baseStr.length <= 1000</code></li>
  <li><code>s1.length == s2.length</code></li>
  <li><code>s1</code>, <code>s2</code>, and <code>baseStr</code> consist of lowercase English letters.</li>
</ul>
</div>
