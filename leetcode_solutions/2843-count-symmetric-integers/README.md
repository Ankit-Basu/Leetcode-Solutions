### <h2><a href="https://leetcode.com/problems/count-symmetric-integers/">2843. Count Symmetric Integers</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given two positive integers <code>low</code> and <code>high</code>.</p>  

<p>An integer <code>x</code> consisting of <code>2 * n</code> digits is called <strong>symmetric</strong> if the sum of the first <code>n</code> digits of <code>x</code> is equal to the sum of the last <code>n</code> digits of <code>x</code>. Note that numbers with an odd number of digits are never symmetric.</p>  

<p>Return the number of symmetric integers in the range <code>[low, high]</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> low = 1, high = 100  
<strong>Output:</strong> 9  
<strong>Explanation:</strong>  
There are 9 symmetric integers between 1 and 100:  
11, 22, 33, 44, 55, 66, 77, 88, 99.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> low = 1200, high = 1230  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The symmetric integers are: 1203, 1212, 1221, and 1230.  
Each has 4 digits, and the sum of the first 2 digits equals the sum of the last 2.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= low <= high <= 10<sup>4</sup></code></li>  
</ul>  
</div>
