### <h2><a href="https://leetcode.com/problems/container-with-most-water/">11. Container With Most Water</a></h2>
<h3>Medium</h3>
<hr>
<div>

<p>You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines such that the two endpoints of the <code>i<sup>th</sup></code> line are <code>(i, 0)</code> and <code>(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container that can store the most water.</p>

<p>Return <strong>the maximum amount of water</strong> a container can store.</p>

<p><strong>Note:</strong> You may not slant the container.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> The lines at positions 1 and 8 form the container with the maximum area: min(8,7) * (8-1) = 49.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>n == height.length</code></li>
  <li><code>2 <= n <= 10<sup>5</sup></code></li>
  <li><code>0 <= height[i] <= 10<sup>4</sup></code></li>
</ul>

</div>
