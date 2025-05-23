### <h2><a href="https://leetcode.com/problems/find-the-maximum-sum-of-node-values/">3068. Find the Maximum Sum of Node Values</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>There exists an undirected tree with <code>n</code> nodes numbered from <code>0</code> to <code>n - 1</code>. You are given a 0-indexed 2D integer array <code>edges</code> of length <code>n - 1</code>, where <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> indicates that there is an edge between nodes <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code> in the tree.</p>  

<p>You are also given a positive integer <code>k</code>, and a 0-indexed array of non-negative integers <code>nums</code> of length <code>n</code>, where <code>nums[i]</code> represents the value of the node numbered <code>i</code>.</p>  

<p>Alice wants the sum of values of tree nodes to be maximum, and she can perform the following operation any number of times (including zero):</p>  
<ul>  
  <li>Choose any edge <code>[u, v]</code> and update the node values as:  
    <ul>  
      <li><code>nums[u] = nums[u] XOR k</code></li>  
      <li><code>nums[v] = nums[v] XOR k</code></li>  
    </ul>  
  </li>  
</ul>  

<p>Return the <strong>maximum possible sum</strong> of the values Alice can achieve by performing the operation any number of times.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> nums = [1,2,1], k = 3, edges = [[0,1],[0,2]]  
<strong>Output:</strong> 6  
<strong>Explanation:</strong>  
Choose edge [0,2]: nums becomes [2,2,2]. Total sum = 6.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> nums = [2,3], k = 7, edges = [[0,1]]  
<strong>Output:</strong> 9  
<strong>Explanation:</strong>  
Choose edge [0,1]: nums becomes [5,4]. Total sum = 9.
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> nums = [7,7,7,7,7,7], k = 3, edges = [[0,1],[0,2],[0,3],[0,4],[0,5]]  
<strong>Output:</strong> 42  
<strong>Explanation:</strong>  
No operation needed. Initial sum = 42 is already the maximum.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>2 <= n == nums.length <= 2 * 10<sup>4</sup></code></li>  
  <li><code>1 <= k <= 10<sup>9</sup></code></li>  
  <li><code>0 <= nums[i] <= 10<sup>9</sup></code></li>  
  <li><code>edges.length == n - 1</code></li>  
  <li><code>edges[i].length == 2</code></li>  
  <li><code>0 <= edges[i][0], edges[i][1] <= n - 1</code></li>  
  <li>The input is guaranteed to form a valid tree.</li>  
</ul>  
</div>
