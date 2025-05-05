### <h2><a href="https://leetcode.com/problems/domino-and-tromino-tiling/">790. Domino and Tromino Tiling</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You have two types of tiles: a <strong>2 x 1 domino</strong> shape and an <strong>L-shaped tromino</strong>. You may rotate these shapes.</p>

<p>Given an integer <code>n</code>, return the number of ways to tile a <code>2 x n</code> board. Since the answer may be very large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p>In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupied by a tile.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> 5
<strong>Explanation:</strong> The five different ways to tile a 2 x 3 board include:
- Three vertical dominoes
- One horizontal domino and two vertical
- Two L-shaped trominoes in mirror image
- One L-shaped and two vertical dominoes (2 variations)
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 1
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= n <= 1000</code></li>
</ul>
</div>
