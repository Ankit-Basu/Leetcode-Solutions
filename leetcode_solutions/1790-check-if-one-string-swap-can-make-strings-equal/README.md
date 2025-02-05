### <h2><a href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/">1790. Check if One String Swap Can Make Strings Equal</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given two strings <code>s1</code> and <code>s2</code> of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.</p>  

<p>Return <code>true</code> if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return <code>false</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> s1 = "bank", s2 = "kanb"  
<strong>Output:</strong> true  
<strong>Explanation:</strong> For example, swap the first character with the last character of s2 to make "bank".  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> s1 = "attack", s2 = "defend"  
<strong>Output:</strong> false  
<strong>Explanation:</strong> It is impossible to make them equal with one string swap.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> s1 = "kelb", s2 = "kelb"  
<strong>Output:</strong> true  
<strong>Explanation:</strong> The two strings are already equal, so no string swap operation is required.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= s1.length, s2.length <= 100</code></li>  
<li><code>s1.length == s2.length</code></li>  
<li><code>s1</code> and <code>s2</code> consist of only lowercase English letters.</li>  
</ul>  
</div>  
