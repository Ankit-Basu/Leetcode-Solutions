### <h2><a href="https://leetcode.com/problems/zero-array-transformation-i/">3355. Zero Array Transformation I</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> of length <code>n</code> and a 2D array <code>queries</code>, where <code>queries[i] = [l<sub>i</sub>, r<sub>i</sub>]</code>.</p>

<p>For each <code>queries[i]</code>:</p>

<ul>
  <li>Select a subset of indices within the range <code>[l<sub>i</sub>, r<sub>i</sub>]</code> in <code>nums</code>.</li>
  <li>Decrement the values at the selected indices by <code>1</code>.</li>
</ul>

<p>A <strong>Zero Array</strong> is an array where all elements are equal to <code>0</code>.</p>

<p>Return <code>true</code> if it is possible to transform <code>nums</code> into a Zero Array after processing all the queries <strong>in order</strong>, otherwise return <code>false</code>.</p>

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> nums = [1,0,1], queries = [[0,2]]  
<strong>Output:</strong> true  
<strong>Explanation:</strong>  
For query [0,2], select indices [0, 2] and decrement their values:  
[1,0,1] → [0,0,0]  
All elements are 0, so return true.
</pre>

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> nums = [4,3,2,1], queries = [[1,3],[0,2]]  
<strong>Output:</strong> false  
<strong>Explanation:</strong>  
Query [1,3]: select indices [1,2,3] → [4,2,1,0]  
Query [0,2]: select indices [0,1,2] → [3,1,0,0]  
Not all elements are zero, return false.
</pre>

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 <= nums.length <= 10<sup>5</sup></code></li>  
  <li><code>0 <= nums[i] <= 10<sup>5</sup></code></li>  
  <li><code>1 <= queries.length <= 10<sup>5</sup></code></li>  
  <li><code>queries[i].length == 2</code></li>  
  <li><code>0 <= l<sub>i</sub> <= r<sub>i</sub> < nums.length</code></li>  
</ul>  
</div>
