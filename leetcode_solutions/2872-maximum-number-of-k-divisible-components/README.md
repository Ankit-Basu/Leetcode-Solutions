<h2><a href="https://leetcode.com/problems/maximum-number-of-k-divisible-components/">2872. Maximum Number of K-Divisible Components</a></h2>
<h3>Hard</h3>
<hr>
<div>
  <p>There is an undirected tree with <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code>. You are given the integer <code>n</code> and a 2D integer array <code>edges</code> of length <code>n - 1</code>, where <code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that there is an edge between nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code> in the tree.</p>
  <p>You are also given a 0-indexed integer array <code>values</code> of length <code>n</code>, where <code>values[i]</code> is the value associated with the <code>i<sup>th</sup></code> node, and an integer <code>k</code>.</p>
  <p>A valid split of the tree is obtained by removing any set of edges, possibly empty, from the tree such that the resulting components all have values that are divisible by <code>k</code>, where the value of a connected component is the sum of the values of its nodes.</p>
  <p>Return the maximum number of components in any valid split.</p>

  <p><strong>Example 1:</strong></p>
  <pre>
    <strong>Input:</strong> n = 5, edges = [[0,2],[1,2],[1,3],[2,4]], values = [1,8,1,4,4], k = 6
    <strong>Output:</strong> 2
    <strong>Explanation:</strong>
    We remove the edge connecting node 1 with 2. The resulting split is valid because:
    - The value of the component containing nodes 1 and 3 is <code>values[1] + values[3] = 12</code>.
    - The value of the component containing nodes 0, 2, and 4 is <code>values[0] + values[2] + values[4] = 6</code>.
    It can be shown that no other valid split has more than 2 connected components.
  </pre>

  <p><strong>Example 2:</strong></p>
  <pre>
    <strong>Input:</strong> n = 7, edges = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]], values = [3,0,6,1,5,2,1], k = 3
    <strong>Output:</strong> 3
    <strong>Explanation:</strong>
    We remove the edge connecting node 0 with 2, and the edge connecting node 0 with 1. The resulting split is valid because:
    - The value of the component containing node 0 is <code>values[0] = 3</code>.
    - The value of the component containing nodes 2, 5, and 6 is <code>values[2] + values[5] + values[6] = 9</code>.
    - The value of the component containing nodes 1, 3, and 4 is <code>values[1] + values[3] + values[4] = 6</code>.
    It can be shown that no other valid split has more than 3 connected components.
  </pre>

  <p><strong>Constraints:</strong></p>
  <ul>
    <li><code>1 &lt;= n &lt;= 3 * 10<sup>4</sup></code></li>
    <li><code>edges.length == n - 1</code></li>
    <li><code>edges[i].length == 2</code></li>
    <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li>
    <li><code>values.length == n</code></li>
    <li><code>0 &lt;= values[i] &lt;= 10<sup>9</sup></code></li>
    <li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li>
    <li>Sum of <code>values</code> is divisible by <code>k</code>.</li>
    <li>The input is generated such that <code>edges</code> represents a valid tree.</li>
  </ul>
</div>
