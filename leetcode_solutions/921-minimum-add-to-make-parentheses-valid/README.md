<h2><a href="https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/">921. Minimum Add to Make Parentheses Valid</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>A parentheses string is valid if and only if:</p>
<ul>
  <li>It is the empty string,</li>
  <li>It can be written as AB (A concatenated with B), where A and B are valid strings, or</li>
  <li>It can be written as (A), where A is a valid string.</li>
</ul>
<p>You are given a parentheses string <code>s</code>. In one move, you can insert a parenthesis at any position of the string.</p>

<p>For example, if <code>s = "()))"</code>, you can insert an opening parenthesis to be <code>"(()))"</code> or a closing parenthesis to be <code>"())))"</code>.</p>
<p>Return the minimum number of moves required to make <code>s</code> valid.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s = "())"
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> s = "((("
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= s.length &lt;= 1000</code></li>
  <li><code>s[i]</code> is either <code>'('</code> or <code>')'</code>.</li>
</ul>
</div>
