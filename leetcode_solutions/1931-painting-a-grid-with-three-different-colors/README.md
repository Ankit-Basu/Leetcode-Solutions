### <h2><a href="https://leetcode.com/problems/painting-a-grid-with-three-different-colors/">1931. Painting a Grid With Three Different Colors</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given two integers <code>m</code> and <code>n</code>. Consider an <code>m x n</code> grid where each cell is initially white. You can paint each cell either red, green, or blue. All cells must be painted.</p>

<p>Your task is to return the number of ways to color the grid such that no two adjacent cells (sharing an edge) have the same color. Since the result may be very large, return it modulo <code>10⁹ + 7</code>.</p>

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> m = 1, n = 1  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> The three valid colorings are [Red], [Green], and [Blue].
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> m = 1, n = 2  
<strong>Output:</strong> 6  
<strong>Explanation:</strong> Each cell can be painted differently from its neighbor. Possible combinations include [R,G], [G,R], [R,B], etc.
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> m = 5, n = 5  
<strong>Output:</strong> 580986  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 <= m <= 5</code></li>  
  <li><code>1 <= n <= 1000</code></li>  
</ul>  
</div>
