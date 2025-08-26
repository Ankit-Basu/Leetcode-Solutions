<h2><a href="https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/">3000. Maximum Area of Longest Diagonal Rectangle</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given a 2D 0-indexed integer array <code>dimensions</code>.</p>

<p>For all indices <code>i</code>, <code>0 &le; i &lt; dimensions.length</code>, <code>dimensions[i][0]</code> represents the length and <code>dimensions[i][1]</code> represents the width of the rectangle <code>i</code>.</p>

<p>Return the <strong>area of the rectangle having the longest diagonal</strong>. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> dimensions = [[9,3],[8,6]]
<strong>Output:</strong> 48
<strong>Explanation:</strong> 
For index = 0, length = 9 and width = 3. Diagonal length = sqrt(9 * 9 + 3 * 3) = sqrt(90) ≈ 9.487.
For index = 1, length = 8 and width = 6. Diagonal length = sqrt(8 * 8 + 6 * 6) = sqrt(100) = 10.
So, the rectangle at index 1 has a greater diagonal length therefore we return area = 8 * 6 = 48.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> dimensions = [[3,4],[4,3]]
<strong>Output:</strong> 12
<strong>Explanation:</strong> Length of diagonal is the same for both which is 5, so maximum area = 12.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; dimensions.length &le; 100</code></li>
  <li><code>dimensions[i].length == 2</code></li>
  <li><code>1 &le; dimensions[i][0], dimensions[i][1] &le; 100</code></li>
</ul>
</div>
