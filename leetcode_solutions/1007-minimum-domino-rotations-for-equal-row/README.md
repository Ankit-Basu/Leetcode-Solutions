### <h2><a href="https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/">1007. Minimum Domino Rotations For Equal Row</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>In a row of dominoes, <code>tops[i]</code> and <code>bottoms[i]</code> represent the top and bottom halves of the <code>i<sup>th</sup></code> domino. (A domino is a tile with two numbers from 1 to 6 — one on each half of the tile.)</p>

<p>You may rotate the <code>i<sup>th</sup></code> domino, so that <code>tops[i]</code> and <code>bottoms[i]</code> swap values.</p>

<p>Return the minimum number of rotations so that all the values in <code>tops</code> are the same, or all the values in <code>bottoms</code> are the same.</p>

<p>If it cannot be done, return <code>-1</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> tops = [2,1,2,4,2,2], bottoms = [5,2,6,2,3,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>  
We can rotate the second and fourth dominoes to make the top row all 2s.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> tops = [3,5,1,2,3], bottoms = [3,6,3,3,4]
<strong>Output:</strong> -1
<strong>Explanation:</strong>  
It is not possible to make all the values in either the top or bottom row the same.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 <= tops.length <= 2 * 10<sup>4</sup></code></li>
  <li><code>bottoms.length == tops.length</code></li>
  <li><code>1 <= tops[i], bottoms[i] <= 6</code></li>
</ul>
</div>
