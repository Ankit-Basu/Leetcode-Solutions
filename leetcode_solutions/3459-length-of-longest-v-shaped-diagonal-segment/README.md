<h2><a href="https://leetcode.com/problems/length-of-longest-v-shaped-diagonal-segment/">3459. Length of Longest V-Shaped Diagonal Segment</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You are given a 2D integer matrix <code>grid</code> of size <code>n x m</code>, where each element is either <code>0</code>, <code>1</code>, or <code>2</code>.</p>

<p>A <strong>V-shaped diagonal segment</strong> is defined as:</p>
<ul>
  <li>The segment starts with <code>1</code>.</li>
  <li>The subsequent elements follow this infinite sequence: <code>2, 0, 2, 0, ...</code></li>
  <li>The segment:
    <ul>
      <li>Starts along a diagonal direction (top-left to bottom-right, bottom-right to top-left, top-right to bottom-left, or bottom-left to top-right).</li>
      <li>Continues the sequence in the same diagonal direction.</li>
      <li>Makes at most one clockwise 90-degree turn to another diagonal direction while maintaining the sequence.</li>
    </ul>
  </li>
</ul>

<p>Return the length of the longest V-shaped diagonal segment. If no valid segment exists, return <code>0</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> grid = [[2,2,1,2,2],[2,0,2,2,0],[2,0,1,1,0],[1,0,2,2,2],[2,0,0,2,2]]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The longest V-shaped diagonal segment has a length of 5 and follows these coordinates: (0,2) → (1,3) → (2,4), takes a 90-degree clockwise turn at (2,4), and continues as (3,3) → (4,2).
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> grid = [[2,2,2,2,2],[2,0,2,2,0],[2,0,1,1,0],[1,0,2,2,2],[2,0,0,2,2]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest V-shaped diagonal segment has a length of 4 and follows these coordinates: (2,3) → (3,2), takes a 90-degree clockwise turn at (3,2), and continues as (2,1) → (1,0).
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> grid = [[1,2,2,2,2],[2,2,2,2,0],[2,0,0,0,0],[0,0,2,2,2],[2,0,0,2,0]]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The longest V-shaped diagonal segment has a length of 5 and follows these coordinates: (0,0) → (1,1) → (2,2) → (3,3) → (4,4).
</pre>

<p><strong class="example">Example 4:</strong></p>
<pre><strong>Input:</strong> grid = [[1]]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The longest V-shaped diagonal segment has a length of 1 and follows these coordinates: (0,0).
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == grid.length</code></li>
  <li><code>m == grid[i].length</code></li>
  <li><code>1 &le; n, m &le; 500</code></li>
  <li><code>grid[i][j]</code> is either <code>0</code>, <code>1</code>, or <code>2</code>.</li>
</ul>
</div>
