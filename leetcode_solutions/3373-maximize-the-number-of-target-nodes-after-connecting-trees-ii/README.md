### <h2><a href="https://leetcode.com/problems/maximize-the-number-of-target-nodes-after-connecting-trees-ii/">3373. Maximize the Number of Target Nodes After Connecting Trees II</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>There exist two undirected trees with <code>n</code> and <code>m</code> nodes, labeled uniquely in the ranges <code>[0, n - 1]</code> and <code>[0, m - 1]</code> respectively.</p>

<p>You are given two 2D integer arrays <code>edges1</code> and <code>edges2</code> of lengths <code>n - 1</code> and <code>m - 1</code>, where:</p>
<ul>
  <li><code>edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates an edge between nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code> in the first tree.</li>
  <li><code>edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> indicates an edge between nodes <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code> in the second tree.</li>
</ul>

<p>Node <code>u</code> is considered a <em>target</em> to node <code>v</code> if the number of edges on the path from <code>u</code> to <code>v</code> is <strong>even</strong>. (Note: a node is always a target to itself, as the distance is 0.)</p>

<p>Your task is to return an array of <code>n</code> integers <code>answer</code>, where <code>answer[i]</code> is the <strong>maximum</strong> number of nodes target to node <code>i</code> in the first tree if you connect <strong>any</strong> node of the first tree to <strong>any</strong> node of the second tree (one edge only, temporarily).</p>

<p>Each query is independent. After evaluating for one node, remove the added edge before the next.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong>
edges1 = [[0,1],[0,2],[2,3],[2,4]],
edges2 = [[0,1],[0,2],[0,3],[2,7],[1,4],[4,5],[4,6]]

<strong>Output:</strong> [8,7,7,8,8]

<strong>Explanation:</strong>
- For i = 0: connect to node 0 in tree2 → 8 target nodes with even distance
- For i = 1: connect to node 4 in tree2 → 7 target nodes
- For i = 2: connect to node 7 in tree2 → 7 target nodes
- For i = 3: connect to node 0 in tree2 → 8 target nodes
- For i = 4: connect to node 4 in tree2 → 8 target nodes
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong>
edges1 = [[0,1],[0,2],[0,3],[0,4]],
edges2 = [[0,1],[1,2],[2,3]]

<strong>Output:</strong> [3,6,6,6,6]

<strong>Explanation:</strong>
- Each node in tree1 connects to any node in tree2 → best combination yields up to 6 even-distance target nodes
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 <= n, m <= 10<sup>5</sup></code></li>
  <li><code>edges1.length == n - 1</code></li>
  <li><code>edges2.length == m - 1</code></li>
  <li><code>edges1[i].length == edges2[i].length == 2</code></li>
  <li><code>0 <= a<sub>i</sub>, b<sub>i</sub> < n</code></li>
  <li><code>0 <= u<sub>i</sub>, v<sub>i</sub> < m</code></li>
  <li>The input is guaranteed to form valid trees.</li>
</ul>
</div>
