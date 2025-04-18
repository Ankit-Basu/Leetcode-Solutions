### <h2><a href="https://leetcode.com/problems/count-and-say/">38. Count and Say</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>The count-and-say sequence is a sequence of digit strings defined by the recursive formula:</p>  

<ul>  
  <li><code>countAndSay(1) = "1"</code></li>  
  <li><code>countAndSay(n)</code> is the run-length encoding (RLE) of <code>countAndSay(n - 1)</code></li>  
</ul>  

<p><strong>Run-length encoding</strong> (RLE) compresses a string by replacing consecutive identical characters with the count followed by the character. For example, compressing <code>"3322251"</code> results in <code>"23321511"</code>.</p>  

<p>Given a positive integer <code>n</code>, return the <code>n</code>th element of the count-and-say sequence.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> n = 4  
<strong>Output:</strong> "1211"  
<strong>Explanation:</strong>  
countAndSay(1) = "1"  
countAndSay(2) = "11" (one 1)  
countAndSay(3) = "21" (two 1s)  
countAndSay(4) = "1211" (one 2, then one 1)  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> n = 1  
<strong>Output:</strong> "1"  
<strong>Explanation:</strong> This is the base case.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= n <= 30</code></li>  
</ul>  
</div>
