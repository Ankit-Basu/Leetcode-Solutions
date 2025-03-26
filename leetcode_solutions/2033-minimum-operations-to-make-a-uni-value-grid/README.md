### <h2><a href="https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/">2033. Minimum Operations to Make a Uni-Value Grid</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 2D integer <code>grid</code> of size <code>m × n</code> and an integer <code>x</code>. In one operation, you can add <code>x</code> to or subtract <code>x</code> from any element in the grid.</p>  

<p>A <strong>uni-value grid</strong> is a grid where all the elements are equal.</p>  

<p>Return the <strong>minimum</strong> number of operations to make the grid uni-value. If it is <strong>not possible</strong>, return <code>-1</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[2,4],[6,8]], x = 2  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
We can make every element equal to <code>4</code> by doing the following:  
- Add <code>x</code> to <code>2</code> once.  
- Subtract <code>x</code> from <code>6</code> once.  
- Subtract <code>x</code> from <code>8</code> twice.  
A total of <code>4</code> operations were used.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,5],[2,3]], x = 1  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
We can make every element equal to <code>3</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,2],[3,4]], x = 2  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
It is impossible to make every element equal.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>m == grid.length</code></li>  
<li><code>n == grid[i].length</code></li>  
<li><code>1 ≤ m, n ≤ 10⁵</code></li>  
<li><code>1 ≤ m × n ≤ 10⁵</code></li>  
<li><code>1 ≤ x, grid[i][j] ≤ 10⁴</code></li>  
</ul>  
</div>  
