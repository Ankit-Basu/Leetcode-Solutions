<h2><a href="https://leetcode.com/problems/sort-matrix-by-diagonals/">3446. Sort Matrix by Diagonals</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an <code>n x n</code> square matrix of integers <code>grid</code>. Return the matrix such that:</p>
<ul>
  <li>The diagonals in the bottom-left triangle (including the middle diagonal) are sorted in <strong>non-increasing order</strong>.</li>
  <li>The diagonals in the top-right triangle are sorted in <strong>non-decreasing order</strong>.</li>
</ul>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[1,7,3],[9,8,2],[4,5,6]]
<strong>Output:</strong> [[8,2,3],[9,6,7],[4,5,1]]
<strong>Explanation:</strong>
Diagonals in the bottom-left triangle:
[1,8,6] → [8,6,1]
[9,5] and [4] remain unchanged.
Diagonals in the top-right triangle:
[7,2] → [2,7]
[3] remains unchanged.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[0,1],[1,2]]
<strong>Output:</strong> [[2,1],[1,0]]
<strong>Explanation:</strong>
Bottom-left diagonal [0,2] → [2,0], other diagonals already in order.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> grid = [[1]]
<strong>Output:</strong> [[1]]
<strong>Explanation:</strong> Diagonals with exactly one element are already in order.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>grid.length == grid[i].length == n</code></li>
  <li><code>1 &le; n &le; 10</code></li>
  <li><code>-10<sup>5</sup> &le; grid[i][j] &le; 10<sup>5</sup></code></li>
</ul>
</div>
