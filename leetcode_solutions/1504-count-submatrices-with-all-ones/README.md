<h2><a href="https://leetcode.com/problems/count-submatrices-with-all-ones/">1504. Count Submatrices With All Ones</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given an <code>m x n</code> binary matrix <code>mat</code>, return the number of submatrices that have all ones.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> mat = [[1,0,1],[1,1,0],[1,1,0]]
<strong>Output:</strong> 13
<strong>Explanation:</strong> 
There are 6 rectangles of side 1x1.
There are 2 rectangles of side 1x2.
There are 3 rectangles of side 2x1.
There is 1 rectangle of side 2x2. 
There is 1 rectangle of side 3x1.
Total number of rectangles = 6 + 2 + 3 + 1 + 1 = 13.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> mat = [[0,1,1,0],[0,1,1,1],[1,1,1,0]]
<strong>Output:</strong> 24
<strong>Explanation:</strong> 
There are 8 rectangles of side 1x1.
There are 5 rectangles of side 1x2.
There are 2 rectangles of side 1x3. 
There are 4 rectangles of side 2x1.
There are 2 rectangles of side 2x2. 
There are 2 rectangles of side 3x1. 
There is 1 rectangle of side 3x2. 
Total number of rectangles = 8 + 5 + 2 + 4 + 2 + 2 + 1 = 24.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; m, n &le; 150</code></li>
  <li><code>mat[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div>
