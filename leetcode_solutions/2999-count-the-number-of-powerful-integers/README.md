### <h2><a href="https://leetcode.com/problems/count-the-number-of-powerful-integers/">2999. Count the Number of Powerful Integers</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given three integers <code>start</code>, <code>finish</code>, and <code>limit</code>. You are also given a 0-indexed string <code>s</code> representing a positive integer.</p>  

<p>A positive integer <code>x</code> is called <strong>powerful</strong> if it satisfies both of the following:</p>  
<ul>  
<li><code>x</code> ends with <code>s</code> (i.e., <code>s</code> is a suffix of <code>x</code>)</li>  
<li>Each digit in <code>x</code> is at most <code>limit</code></li>  
</ul>  

<p>Return the total number of powerful integers in the range <code>[start..finish]</code>.</p>  

<p>A string <code>x</code> is a suffix of a string <code>y</code> if and only if <code>x</code> is a substring of <code>y</code> that starts from some index and extends to the end of <code>y</code>. For example, <code>"25"</code> is a suffix of <code>"5125"</code>, whereas <code>"512"</code> is not.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> start = 1, finish = 6000, limit = 4, s = "124"  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
The powerful integers in the range [1..6000] are: 124, 1124, 2124, 3124, 4124.  
Each of them ends with "124" and all digits are ≤ 4.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> start = 15, finish = 215, limit = 6, s = "10"  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
The powerful integers are: 110, 210.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> start = 1000, finish = 2000, limit = 4, s = "3000"  
<strong>Output:</strong> 0  
<strong>Explanation:</strong>  
No integer in [1000..2000] can end with "3000".  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= start <= finish <= 10<sup>15</sup></code></li>  
<li><code>1 <= limit <= 9</code></li>  
<li><code>1 <= s.length <= floor(log<sub>10</sub>(finish)) + 1</code></li>  
<li><code>s</code> only consists of numeric digits ≤ <code>limit</code></li>  
<li><code>s</code> does not contain leading zeros</li>  
</ul>  
</div>
