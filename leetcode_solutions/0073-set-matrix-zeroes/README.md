### <h2><a href="https://leetcode.com/problems/set-matrix-zeroes/">73. Set Matrix Zeroes</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given an <code>m x n</code> integer matrix <code>matrix</code>, if an element is <code>0</code>, set its entire row and column to <code>0</code>'s.</p>  

<p>You must do it <strong>in place</strong>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> matrix = [[1,1,1],[1,0,1],[1,1,1]]  
<strong>Output:</strong> [[1,0,1],[0,0,0],[1,0,1]]  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]  
<strong>Output:</strong> [[0,0,0,0],[0,4,5,0],[0,3,1,0]]  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>m == matrix.length</code></li>  
  <li><code>n == matrix[0].length</code></li>  
  <li><code>1 <= m, n <= 200</code></li>  
  <li><code>-2<sup>31</sup> <= matrix[i][j] <= 2<sup>31</sup> - 1</code></li>  
</ul>  

<p><strong>Follow up:</strong></p>  
<ul>  
  <li>A straightforward solution using <code>O(mn)</code> space is probably a bad idea.</li>  
  <li>A simple improvement uses <code>O(m + n)</code> space, but still not the best solution.</li>  
  <li>Could you devise a constant space solution?</li>  
</ul>  
</div>
