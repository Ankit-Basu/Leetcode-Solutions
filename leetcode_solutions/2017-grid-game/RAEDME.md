### <h2><a href="https://leetcode.com/problems/grid-game/">2017. Grid Game</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed 2D array <code>grid</code> of size <code>2 x n</code>, where <code>grid[r][c]</code> represents the number of points at position <code>(r, c)</code> on the matrix. Two robots are playing a game on this matrix.</p>  

<p>Both robots initially start at <code>(0, 0)</code> and want to reach <code>(1, n-1)</code>. Each robot may only move to the right <code>((r, c) to (r, c + 1))</code> or down <code>((r, c) to (r + 1, c))</code>.</p>  

<p>At the start of the game, the first robot moves from <code>(0, 0)</code> to <code>(1, n-1)</code>, collecting all the points from the cells on its path. For all cells <code>(r, c)</code> traversed on the path, <code>grid[r][c]</code> is set to <code>0</code>. Then, the second robot moves from <code>(0, 0)</code> to <code>(1, n-1)</code>, collecting the points on its path. Note that their paths may intersect with one another.</p>  

<p>The first robot wants to minimize the number of points collected by the second robot. In contrast, the second robot wants to maximize the number of points it collects. If both robots play optimally, return the number of points collected by the second robot.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> grid = [[2,5,4],[1,5,1]]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.  
The cells visited by the first robot are set to <code>0</code>.  
The second robot will collect <code>0 + 0 + 4 + 0 = 4</code> points.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> grid = [[3,3,1],[8,5,2]]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.  
The cells visited by the first robot are set to <code>0</code>.  
The second robot will collect <code>0 + 3 + 1 + 0 = 4</code> points.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> grid = [[1,3,1,15],[1,3,3,1]]  
<strong>Output:</strong> 7  
<strong>Explanation:</strong>  
The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.  
The cells visited by the first robot are set to <code>0</code>.  
The second robot will collect <code>0 + 1 + 3 + 3 + 0 = 7</code> points.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>grid.length == 2</code></li>  
<li><code>n == grid[r].length</code></li>  
<li><code>1 <= n <= 5 * 10<sup>4</sup></code></li>  
<li><code>1 <= grid[r][c] <= 10<sup>5</sup></code></li>  
</ul>  
</div>  
