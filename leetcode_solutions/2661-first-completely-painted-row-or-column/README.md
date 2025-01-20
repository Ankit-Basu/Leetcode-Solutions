### <h2><a href="https://leetcode.com/problems/first-completely-painted-row-or-column/">2661. First Completely Painted Row or Column</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed integer array <code>arr</code>, and an <code>m x n</code> integer matrix <code>mat</code>. Both <code>arr</code> and <code>mat</code> contain all the integers in the range <code>[1, m * n]</code>.</p>  

<p>Go through each index <code>i</code> in <code>arr</code> starting from index <code>0</code> and paint the cell in <code>mat</code> containing the integer <code>arr[i]</code>.</p>  

<p>Return the smallest index <code>i</code> at which either a row or a column will be completely painted in <code>mat</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> arr = [1,3,4,2], mat = [[1,4],[2,3]]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong> The moves are shown in order, and both the first row and second column of the matrix become fully painted at <code>arr[2]</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> arr = [2,8,7,4,1,3,5,6,9], mat = [[3,2,5],[1,4,6],[8,7,9]]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> The second column becomes fully painted at <code>arr[3]</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>m == mat.length</code></li>  
<li><code>n == mat[i].length</code></li>  
<li><code>arr.length == m * n</code></li>  
<li><code>1 <= m, n <= 10<sup>5</sup></code></li>  
<li><code>1 <= m * n <= 10<sup>5</sup></code></li>  
<li><code>1 <= arr[i], mat[r][c] <= m * n</code></li>  
<li>All the integers of <code>arr</code> are unique.</li>  
<li>All the integers of <code>mat</code> are unique.</li>  
</ul>  
</div>  
