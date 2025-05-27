### <h2><a href="https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/">2894. Divisible and Non-divisible Sums Difference</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given two positive integers <code>n</code> and <code>m</code>.</p>

<p>Define two integers:</p>
<ul>
  <li><code>num1</code>: The sum of all integers in the range <code>[1, n]</code> that are <strong>not divisible</strong> by <code>m</code>.</li>
  <li><code>num2</code>: The sum of all integers in the range <code>[1, n]</code> that are <strong>divisible</strong> by <code>m</code>.</li>
</ul>

<p>Return <code>num1 - num2</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 10, m = 3
<strong>Output:</strong> 19
<strong>Explanation:</strong>
- Numbers not divisible by 3: [1,2,4,5,7,8,10], sum = 37
- Numbers divisible by 3: [3,6,9], sum = 18
- Result: 37 - 18 = 19
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 5, m = 6
<strong>Output:</strong> 15
<strong>Explanation:</strong>
- Numbers not divisible by 6: [1,2,3,4,5], sum = 15
- Numbers divisible by 6: [], sum = 0
- Result: 15 - 0 = 15
</pre>

<p><strong>Example 3:</strong></p>
<pre>
<strong>Input:</strong> n = 5, m = 1
<strong>Output:</strong> -15
<strong>Explanation:</strong>
- Numbers not divisible by 1: [], sum = 0
- Numbers divisible by 1: [1,2,3,4,5], sum = 15
- Result: 0 - 15 = -15
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= n, m <= 1000</code></li>
</ul>
</div>
