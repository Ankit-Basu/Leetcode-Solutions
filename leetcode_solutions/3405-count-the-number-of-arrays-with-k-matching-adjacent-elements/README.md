### <h2><a href="https://leetcode.com/problems/count-the-number-of-arrays-with-k-matching-adjacent-elements/">3405. Count the Number of Arrays with K Matching Adjacent Elements</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given three integers <code>n</code>, <code>m</code>, and <code>k</code>. A <strong>good</strong> array <code>arr</code> of size <code>n</code> is defined as follows:</p>

<ul>
  <li>Each element in <code>arr</code> is in the inclusive range <code>[1, m]</code>.</li>
  <li>Exactly <code>k</code> indices <code>i</code> (where <code>1 <= i < n</code>) satisfy the condition <code>arr[i - 1] == arr[i]</code>.</li>
</ul>

<p>Return the number of good arrays that can be formed. Since the answer may be very large, return it <strong>modulo</strong> <code>10⁹ + 7</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> n = 3, m = 2, k = 1  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The valid arrays are [1, 1, 2], [1, 2, 2], [2, 1, 1], and [2, 2, 1].
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> n = 4, m = 2, k = 2  
<strong>Output:</strong> 6  
<strong>Explanation:</strong>  
The valid arrays are [1, 1, 1, 2], [1, 1, 2, 2], [1, 2, 2, 2], [2, 1, 1, 1], [2, 2, 1, 1], and [2, 2, 2, 1].
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> n = 5, m = 2, k = 0  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
Only two arrays have no adjacent equal elements: [1, 2, 1, 2, 1] and [2, 1, 2, 1, 2].
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= n <= 10⁵</code></li>
  <li><code>1 <= m <= 10⁵</code></li>
  <li><code>0 <= k <= n - 1</code></li>
</ul>
</div>
