### <h2><a href="https://leetcode.com/problems/count-good-numbers/">1922. Count Good Numbers</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>A digit string is called <strong>good</strong> if the digits (0-indexed) at even indices are <strong>even</strong> and the digits at odd indices are <strong>prime</strong> (i.e., 2, 3, 5, or 7).</p>  

<p>For example:</p>  
<ul>  
<li>"2582" is good because digits at even indices (2 and 8) are even, and digits at odd indices (5 and 2) are prime.</li>  
<li>"3245" is not good because the digit '3' at index 0 is not even.</li>  
</ul>  

<p>Given an integer <code>n</code>, return the total number of good digit strings of length <code>n</code>. Since the answer may be large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>  

<p>A digit string is a string consisting of digits 0 through 9 and may contain leading zeros.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> n = 1  
<strong>Output:</strong> 5  
<strong>Explanation:</strong> The valid good numbers of length 1 are "0", "2", "4", "6", "8".  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> n = 4  
<strong>Output:</strong> 400  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> n = 50  
<strong>Output:</strong> 564908303  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= n <= 10<sup>15</sup></code></li>  
</ul>  
</div>
