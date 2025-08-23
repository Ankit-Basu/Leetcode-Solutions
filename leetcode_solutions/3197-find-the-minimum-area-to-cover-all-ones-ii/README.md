<h2><a href="https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-ii/">3197. Find the Minimum Area to Cover All Ones II</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You are given a 2D binary array <code>grid</code>. You need to find <strong>3 non-overlapping rectangles</strong> having non-zero areas with horizontal and vertical sides such that all the <code>1</code>'s in <code>grid</code> lie inside these rectangles.</p>

<p>Return the <strong>minimum possible sum of the areas</strong> of these rectangles.</p>
<p>Note that the rectangles are allowed to touch.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[1,0,1],[1,1,1]]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
The 1's at (0,0) and (1,0) are covered by a rectangle of area 2.
The 1's at (0,2) and (1,2) are covered by a rectangle of area 2.
The 1 at (1,1) is covered by a rectangle of area 1.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[1,0,1,0],[0,1,0,1]]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
The 1's at (0,0) and (0,2) are covered by a rectangle of area 3.
The 1 at (1,1) is covered by a rectangle of area 1.
The 1 at (1,3) is covered by a rectangle of area 1.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; grid.length, grid[i].length &le; 30</code></li>
  <li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
  <li>The input is generated such that there are at least three <code>1</code>'s in <code>grid</code>.</li>
</ul>
</div>
