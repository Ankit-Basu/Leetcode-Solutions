### <h2><a href="https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/">1368. Minimum Cost to Make at Least One Valid Path in a Grid</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>Given an <code>m x n</code> grid. Each cell of the grid has a sign pointing to the next cell you should visit if you are currently in this cell. The sign of <code>grid[i][j]</code> can be:</p>  
<ul>  
<li><code>1</code> which means go to the cell to the right. (i.e., go from <code>grid[i][j]</code> to <code>grid[i][j + 1]</code>)</li>  
<li><code>2</code> which means go to the cell to the left. (i.e., go from <code>grid[i][j]</code> to <code>grid[i][j - 1]</code>)</li>  
<li><code>3</code> which means go to the lower cell. (i.e., go from <code>grid[i][j]</code> to <code>grid[i + 1][j]</code>)</li>  
<li><code>4</code> which means go to the upper cell. (i.e., go from <code>grid[i][j]</code> to <code>grid[i - 1][j]</code>)</li>  
</ul>  

<p>Notice that there could be some signs on the cells of the grid that point outside the grid.</p>  

<p>You will initially start at the upper-left cell <code>(0, 0)</code>. A valid path in the grid is a path that starts from the upper-left cell <code>(0, 0)</code> and ends at the bottom-right cell <code>(m - 1, n - 1)</code> following the signs on the grid. The valid path does not have to be the shortest.</p>  

<p>You can modify the sign on a cell with <code>cost = 1</code>. You can modify the sign on a cell one time only.</p>  

<p>Return the minimum cost to make the grid have at least one valid path.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> grid = [[1,1,1,1],[2,2,2,2],[1,1,1,1],[2,2,2,2]]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> You will start at point <code>(0, 0)</code>.  
The path to <code>(3, 3)</code> is as follows:  
<code>(0, 0) --> (0, 1) --> (0, 2) --> (0, 3)</code> (change the arrow to down with cost = 1) -->  
<code>(1, 3) --> (1, 2) --> (1, 1) --> (1, 0)</code> (change the arrow to down with cost = 1) -->  
<code>(2, 0) --> (2, 1) --> (2, 2) --> (2, 3)</code> (change the arrow to down with cost = 1) -->  
<code>(3, 3)</code>.  
The total cost = 3.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> grid = [[1,1,3],[3,2,2],[1,1,4]]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> You can follow the path from <code>(0, 0)</code> to <code>(2, 2)</code> directly.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> grid = [[1,2],[4,3]]  
<strong>Output:</strong> 1  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>m == grid.length</code></li>  
<li><code>n == grid[i].length</code></li>  
<li><code>1 <= m, n <= 100</code></li>  
<li><code>1 <= grid[i][j] <= 4</code></li>  
</ul>  
</div>  
