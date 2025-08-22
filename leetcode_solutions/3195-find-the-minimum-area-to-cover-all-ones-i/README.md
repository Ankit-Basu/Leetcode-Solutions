<h2><a href="https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/">3195. Find the Minimum Area to Cover All Ones I</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given a 2D binary array <code>grid</code>. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the <code>1</code>'s in <code>grid</code> lie inside this rectangle.</p>

<p>Return the minimum possible area of the rectangle.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[0,1,0],[1,0,1]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> 
The smallest rectangle has a height of 2 and a width of 3, so it has an area of 2 * 3 = 6.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[1,0],[0,0]]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
The smallest rectangle has both height and width 1, so its area is 1 * 1 = 1.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; grid.length, grid[i].length &le; 1000</code></li>
  <li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
  <li>The input is generated such that there is at least one <code>1</code> in <code>grid</code>.</li>
</ul>
</div>
