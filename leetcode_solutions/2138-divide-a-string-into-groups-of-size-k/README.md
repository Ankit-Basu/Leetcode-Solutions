### <h2><a href="https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/">2138. Divide a String Into Groups of Size k</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>A string <code>s</code> can be partitioned into groups of size <code>k</code> using the following procedure:</p>

<ul>
  <li>The first group consists of the first <code>k</code> characters of the string, the second group consists of the next <code>k</code> characters, and so on.</li>
  <li>Each element can be part of exactly one group.</li>
  <li>If the last group has fewer than <code>k</code> characters, fill it with the given <code>fill</code> character until it reaches size <code>k</code>.</li>
</ul>

<p>Return a string array denoting the composition of every group <code>s</code> has been divided into, using the above procedure.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "abcdefghi", k = 3, fill = "x"
<strong>Output:</strong> ["abc","def","ghi"]
<strong>Explanation:</strong>
Each group of 3 characters can be formed without needing any fill.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "abcdefghij", k = 3, fill = "x"
<strong>Output:</strong> ["abc","def","ghi","jxx"]
<strong>Explanation:</strong>
The last group contains only 1 character, so we add 2 fill characters.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s.length <= 100</code></li>
  <li><code>s</code> consists of lowercase English letters only.</li>
  <li><code>1 <= k <= 100</code></li>
  <li><code>fill</code> is a lowercase English letter.</li>
</ul>
</div>
