### <h2><a href="https://leetcode.com/problems/largest-color-value-in-a-directed-graph/">1857. Largest Color Value in a Directed Graph</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given a directed graph with <code>n</code> nodes, each colored with a lowercase English letter. The nodes are numbered from <code>0</code> to <code>n - 1</code>.</p>

<p>You are also given a string <code>colors</code> where <code>colors[i]</code> is the color assigned to node <code>i</code>, and a 2D integer array <code>edges</code>, where <code>edges[j] = [aj, bj]</code> denotes a directed edge from node <code>aj</code> to node <code>bj</code>.</p>

<p>A valid path in the graph is a sequence of nodes <code>x1 → x2 → x3 → ... → xk</code> such that there is a directed edge from <code>xi</code> to <code>xi+1</code> for every <code>1 ≤ i < k</code>. The <strong>color value</strong> of a path is the count of the color that appears the most frequently along the path.</p>

<p>Return the <strong>largest color value</strong> of any valid path in the graph. If the graph contains a cycle, return <code>-1</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> colors = "abaca", edges = [[0,1],[0,2],[2,3],[3,4]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The path 0 → 2 → 3 → 4 has three nodes with color 'a'.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> colors = "a", edges = [[0,0]]
<strong>Output:</strong> -1
<strong>Explanation:</strong> The graph contains a cycle from node 0 to itself.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == colors.length</code></li>
  <li><code>m == edges.length</code></li>
  <li><code>1 <= n <= 10<sup>5</sup></code></li>
  <li><code>0 <= m <= 10<sup>5</sup></code></li>
  <li><code>colors[i]</code> is a lowercase English letter.</li>
  <li><code>0 <= aj, bj < n</code></li>
</ul>
</div>
