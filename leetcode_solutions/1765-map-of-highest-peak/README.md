### <h2><a href="https://leetcode.com/problems/map-of-highest-peak/">1765. Map of Highest Peak</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer matrix <code>isWater</code> of size <code>m x n</code> that represents a map of land and water cells.</p>  

<ul>  
<li>If <code>isWater[i][j] == 0</code>, cell <code>(i, j)</code> is a land cell.</li>  
<li>If <code>isWater[i][j] == 1</code>, cell <code>(i, j)</code> is a water cell.</li>  
</ul>  

<p>You must assign each cell a height in a way that follows these rules:</p>  

<ul>  
<li>The height of each cell must be non-negative.</li>  
<li>If the cell is a water cell, its height must be <code>0</code>.</li>  
<li>Any two adjacent cells must have an absolute height difference of at most <code>1</code>. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).</li>  
</ul>  

<p>Find an assignment of heights such that the maximum height in the matrix is maximized.</p>  

<p>Return an integer matrix <code>height</code> of size <code>m x n</code> where <code>height[i][j]</code> is cell <code>(i, j)</code>'s height. If there are multiple solutions, return any of them.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> isWater = [[0,1],[0,0]]  
<strong>Output:</strong> [[1,0],[2,1]]  
<strong>Explanation:</strong> The image shows the assigned heights of each cell.  
The blue cell is the water cell, and the green cells are the land cells.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> isWater = [[0,0,1],[1,0,0],[0,0,0]]  
<strong>Output:</strong> [[1,1,0],[0,1,1],[1,2,2]]  
<strong>Explanation:</strong> A height of 2 is the maximum possible height of any assignment.  
Any height assignment that has a maximum height of 2 while still meeting the rules will also be accepted.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>m == isWater.length</code></li>  
<li><code>n == isWater[i].length</code></li>  
<li><code>1 <= m, n <= 1000</code></li>  
<li><code>isWater[i][j]</code> is <code>0</code> or <code>1</code>.</li>  
<li>There is at least one water cell.</li>  
</ul>  

<p><strong>Note:</strong> This question is the same as <a href="https://leetcode.com/problems/01-matrix/">542. 01 Matrix</a>.</p>  
</div>  
