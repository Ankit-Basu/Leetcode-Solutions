<h2><a href="https://leetcode.com/problems/maximum-matrix-sum/">1975. Maximum Matrix Sum</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an <code>n x n</code> integer matrix. You can do the following operation any number of times:</p>

<ul>
    <li>Choose any two adjacent elements of the matrix and multiply each of them by <code>-1</code>.</li>
</ul>

<p>Two elements are considered adjacent if and only if they share a border.</p>

<p>Your goal is to maximize the summation of the matrix's elements. Return the maximum sum of the matrix's elements using the operation mentioned above.</p>

<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> matrix = [[1,-1],[-1,1]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
We can follow the following steps to reach a sum equal to 4:
- Multiply the 2 elements in the first row by <code>-1</code>.
- Multiply the 2 elements in the first column by <code>-1</code>.
</pre>

<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> matrix = [[1,2,3],[-1,-2,-3],[1,2,3]]
<strong>Output:</strong> 16
<strong>Explanation:</strong> 
We can follow the following step to reach a sum equal to 16:
- Multiply the last 2 elements in the second row by <code>-1</code>.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>n == matrix.length == matrix[i].length</code></li>
    <li><code>2 &lt;= n &lt;= 250</code></li>
    <li><code>-10^5 &lt;= matrix[i][j] &lt;= 10^5</code></li>
</ul>
</div>
