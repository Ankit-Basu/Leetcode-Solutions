### <h2><a href="https://leetcode.com/problems/maximum-score-after-splitting-a-string/">1422. Maximum Score After Splitting a String</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a string <code>s</code> of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e., left substring and right substring).</p>  

<p>The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> s = "011101"  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
All possible ways of splitting <code>s</code> into two non-empty substrings are:  
- left = "0" and right = "11101", score = 1 + 4 = 5  
- left = "01" and right = "1101", score = 1 + 3 = 4  
- left = "011" and right = "101", score = 1 + 2 = 3  
- left = "0111" and right = "01", score = 1 + 1 = 2  
- left = "01110" and right = "1", score = 2 + 1 = 3  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> s = "00111"  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> s = "1111"  
<strong>Output:</strong> 3  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>2 <= s.length <= 500</code></li>  
<li>The string <code>s</code> consists of characters <code>'0'</code> and <code>'1'</code> only.</li>  
</ul>  
</div>  
