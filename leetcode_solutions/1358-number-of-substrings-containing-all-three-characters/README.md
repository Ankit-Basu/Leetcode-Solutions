### <h2><a href="https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/">1358. Number of Substrings Containing All Three Characters</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given a string <code>s</code> consisting only of characters <code>'a'</code>, <code>'b'</code>, and <code>'c'</code>.</p>  

<p>Return the number of substrings containing at least one occurrence of all these characters.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> s = "abcabc"  
<strong>Output:</strong> 10  
<strong>Explanation:</strong>  
The substrings containing at least one occurrence of the characters 'a', 'b', and 'c' are:  
- "abc"  
- "abca"  
- "abcab"  
- "abcabc"  
- "bca"  
- "bcab"  
- "bcabc"  
- "cab"  
- "cabc"  
- "abc" (again).  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> s = "aaacb"  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
The substrings containing at least one occurrence of 'a', 'b', and 'c' are:  
- "aaacb"  
- "aacb"  
- "acb".  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> s = "abc"  
<strong>Output:</strong> 1  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 ≤ s.length ≤ 5 × 10⁴</code></li>  
<li><code>s</code> only consists of the characters <code>'a'</code>, <code>'b'</code>, or <code>'c'</code>.</li>  
</ul>  
</div>  
