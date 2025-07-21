<h2><a href="https://leetcode.com/problems/maximum-weighted-k-edge-path/">3543. Maximum Weighted K-Edge Path</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an integer <code>n</code> and a Directed Acyclic Graph (DAG) with <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code>. The graph is represented by a 2D array <code>edges</code>, where <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>, w<sub>i</sub>]</code> indicates a directed edge from node <code>u<sub>i</sub></code> to <code>v<sub>i</sub></code> with weight <code>w<sub>i</sub></code>.</p>

<p>You are also given two integers, <code>k</code> and <code>t</code>.</p>

<p>Your task is to determine the maximum possible sum of edge weights for any path in the graph such that:</p>
<ul>
  <li>The path contains exactly <code>k</code> edges.</li>
  <li>The total sum of edge weights in the path is <strong>strictly less than</strong> <code>t</code>.</li>
</ul>

<p>Return the maximum possible sum of weights for such a path. If no such path exists, return <code>-1</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3, edges = [[0,1,1],[1,2,2]], k = 2, t = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> The only path with exactly 2 edges is 0 → 1 → 2 with weight 1 + 2 = 3, which is strictly less than t = 4.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 3, edges = [[0,1,2],[0,2,3]], k = 1, t = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> Valid paths with 1 edge are:
- 0 → 1 with weight 2 (valid)
- 0 → 2 with weight 3 (not valid since 3 is not less than t)
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> n = 3, edges = [[0,1,6],[1,2,8]], k = 1, t = 6
<strong>Output:</strong> -1
<strong>Explanation:</strong> No single edge path has weight strictly less than 6.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; n &le; 300</code></li>
  <li><code>0 &le; edges.length &le; 300</code></li>
  <li><code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>, w<sub>i</sub>]</code></li>
  <li><code>0 &le; u<sub>i</sub>, v<sub>i</sub> &lt; n</code>, and <code>u<sub>i</sub> ≠ v<sub>i</sub></code></li>
  <li><code>1 &le; w<sub>i</sub> &le; 10</code></li>
  <li><code>0 &le; k &le; 300</code></li>
  <li><code>1 &le; t &le; 600</code></li>
  <li>The graph is a Directed Acyclic Graph (DAG).</li>
  <li>There are no duplicate edges.</li>
</ul>
</div>
