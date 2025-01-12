### <h2><a href="https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/">2116. Check if a Parentheses String Can Be Valid</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>A parentheses string is a non-empty string consisting only of <code>'('</code> and <code>')'</code>. It is valid if any of the following conditions is true:</p>  
<ul>  
<li>It is <code>()</code>.</li>  
<li>It can be written as <code>AB</code> (A concatenated with B), where A and B are valid parentheses strings.</li>  
<li>It can be written as <code>(A)</code>, where A is a valid parentheses string.</li>  
</ul>  

<p>You are given a parentheses string <code>s</code> and a string <code>locked</code>, both of length <code>n</code>. <code>locked</code> is a binary string consisting only of <code>'0'</code>s and <code>'1'</code>s. For each index <code>i</code> of <code>locked</code>:</p>  
<ul>  
<li>If <code>locked[i] == '1'</code>, you cannot change <code>s[i]</code>.</li>  
<li>If <code>locked[i] == '0'</code>, you can change <code>s[i]</code> to either <code>'('</code> or <code>')'</code>.</li>  
</ul>  

<p>Return <code>true</code> if you can make <code>s</code> a valid parentheses string. Otherwise, return <code>false</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> s = "))()))", locked = "010100"  
<strong>Output:</strong> true  
<strong>Explanation:</strong> <code>locked[1] == '1'</code> and <code>locked[3] == '1'</code>, so we cannot change <code>s[1]</code> or <code>s[3]</code>.  
We change <code>s[0]</code> and <code>s[4]</code> to <code>'('</code> while leaving <code>s[2]</code> and <code>s[5]</code> unchanged to make <code>s</code> valid.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> s = "()()", locked = "0000"  
<strong>Output:</strong> true  
<strong>Explanation:</strong> We do not need to make any changes because <code>s</code> is already valid.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> s = ")", locked = "0"  
<strong>Output:</strong> false  
<strong>Explanation:</strong> <code>locked</code> permits us to change <code>s[0]</code>.  
Changing <code>s[0]</code> to either <code>'('</code> or <code>')'</code> will not make <code>s</code> valid.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == s.length == locked.length</code></li>  
<li><code>1 <= n <= 10<sup>5</sup></code></li>  
<li><code>s[i]</code> is either <code>'('</code> or <code>')'</code>.</li>  
<li><code>locked[i]</code> is either <code>'0'</code> or <code>'1'</code>.</li>  
</ul>  
</div>  
