### <h2><a href="https://leetcode.com/problems/count-the-number-of-ideal-arrays/">2338. Count the Number of Ideal Arrays</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given two integers <code>n</code> and <code>maxValue</code>, which are used to describe an <strong>ideal array</strong>.</p>

<p>A 0-indexed integer array <code>arr</code> of length <code>n</code> is considered ideal if:</p>
<ul>
  <li>Every element <code>arr[i]</code> is a value from <code>1</code> to <code>maxValue</code>.</li>
  <li>For every <code>0 &lt; i &lt; n</code>, <code>arr[i]</code> is divisible by <code>arr[i - 1]</code>.</li>
</ul>

<p>Return the number of distinct ideal arrays of length <code>n</code>. Since the answer may be very large, return it modulo <code>10⁹ + 7</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 2, maxValue = 5
<strong>Output:</strong> 10
<strong>Explanation:</strong> The following are valid ideal arrays:
- Starting with 1 (5 arrays): [1,1], [1,2], [1,3], [1,4], [1,5]
- Starting with 2 (2 arrays): [2,2], [2,4]
- Starting with 3 (1 array): [3,3]
- Starting with 4 (1 array): [4,4]
- Starting with 5 (1 array): [5,5]
Total = 5 + 2 + 1 + 1 + 1 = 10
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 5, maxValue = 3
<strong>Output:</strong> 11
<strong>Explanation:</strong> Valid ideal arrays include:
- Starting with 1 (9 arrays): 
  - [1,1,1,1,1]
  - With 2s: [1,1,1,1,2], [1,1,1,2,2], [1,1,2,2,2], [1,2,2,2,2]
  - With 3s: [1,1,1,1,3], [1,1,1,3,3], [1,1,3,3,3], [1,3,3,3,3]
- Starting with 2 (1 array): [2,2,2,2,2]
- Starting with 3 (1 array): [3,3,3,3,3]
Total = 9 + 1 + 1 = 11
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 <= n <= 10<sup>4</sup></code></li>
  <li><code>1 <= maxValue <= 10<sup>4</sup></code></li>
</ul>
</div>
