### <h2><a href="https://leetcode.com/problems/shortest-common-supersequence/">1092. Shortest Common Supersequence</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>Given two strings <code>str1</code> and <code>str2</code>, return the shortest string that has both <code>str1</code> and <code>str2</code> as subsequences. If there are multiple valid strings, return any of them.</p>  

<p>A string <code>s</code> is a subsequence of string <code>t</code> if deleting some number of characters from <code>t</code> (possibly 0) results in the string <code>s</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> str1 = "abac", str2 = "cab"  
<strong>Output:</strong> "cabac"  
<strong>Explanation:</strong>  
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".  
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".  
The answer provided is the shortest such string that satisfies these properties.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> str1 = "aaaaaaaa", str2 = "aaaaaaaa"  
<strong>Output:</strong> "aaaaaaaa"  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ str1.length, str2.length ≤ 1000</code></li>  
<li><code>str1</code> and <code>str2</code> consist of lowercase English letters.</li>  
</ul>  
</div>  
