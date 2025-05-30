### <h2><a href="https://leetcode.com/problems/making-a-large-island/">827. Making A Large Island</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given an <code>n x n</code> binary matrix <code>grid</code>. You are allowed to change at most one <code>0</code> to be <code>1</code>.</p>  

<p>Return the size of the largest island in <code>grid</code> after applying this operation.</p>  

<p>An island is a 4-directionally connected group of <code>1</code>s.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,0],[0,1]]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> Change one <code>0</code> to <code>1</code> and connect two <code>1</code>s, then we get an island with area = <code>3</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,1],[1,0]]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> Change the <code>0</code> to <code>1</code> and make the island bigger, only one island with area = <code>4</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,1],[1,1]]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> Can't change any <code>0</code> to <code>1</code>, only one island with area = <code>4</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == grid.length</code></li>  
<li><code>n == grid[i].length</code></li>  
<li><code>1 <= n <= 500</code></li>  
<li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code>.</li>  
</ul>  
</div>  
