<h2><a href="https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/">1963. Minimum Number of Swaps to Make the String Balanced</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given a 0-indexed string <code>s</code> of even length <code>n</code>. The string consists of exactly <code>n / 2</code> opening brackets <code>'['</code> and <code>n / 2</code> closing brackets <code>']'</code>.</p>

<p>A string is called balanced if and only if:</p>
<ul>
  <li>It is the empty string, or</li>
  <li>It can be written as <code>AB</code>, where both <code>A</code> and <code>B</code> are balanced strings, or</li>
  <li>It can be written as <code>[C]</code>, where <code>C</code> is a balanced string.</li>
</ul>

<p>You may swap the brackets at any two indices any number of times.</p>

<p>Return the minimum number of swaps to make <code>s</code> balanced.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s = "][][
<strong>Output:</strong> 1
<strong>Explanation:</strong> You can make the string balanced by swapping index 0 with index 3. 
The resulting string is "[[]]".
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> s = "]]][[["
<strong>Output:</strong> 2
<strong>Explanation:</strong> You can do the following to make the string balanced:
- Swap index 0 with index 4. s = "[]][][".
- Swap index 1 with index 5. s = "[[][]]".
The resulting string is "[[][]]".
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> s = "[]"
<strong>Output:</strong> 0
<strong>Explanation:</strong> The string is already balanced.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == s.length</code></li>
  <li><code>2 &lt;= n &lt;= 10<sup>6</sup></code></li>
  <li><code>n</code> is even.</li>
  <li><code>s[i]</code> is either <code>'['</code> or <code>']'</code>.</li>
  <li>The number of opening brackets <code>'['</code> equals <code>n / 2</code>, and the number of closing brackets <code>']'</code> equals <code>n / 2</code>.</li>
</ul>
</div>
