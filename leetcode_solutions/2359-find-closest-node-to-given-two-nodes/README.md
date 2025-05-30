### <h2><a href="https://leetcode.com/problems/find-closest-node-to-given-two-nodes/">2359. Find Closest Node to Given Two Nodes</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a directed graph with <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code>. Each node has at most one outgoing edge, represented by the array <code>edges</code> where:</p>

<ul>
  <li><code>edges[i]</code> indicates a directed edge from node <code>i</code> to <code>edges[i]</code>.</li>
  <li>If <code>edges[i] == -1</code>, then node <code>i</code> has no outgoing edge.</li>
</ul>

<p>You are also given two nodes <code>node1</code> and <code>node2</code>.</p>

<p>Return the index of the node that can be reached from both <code>node1</code> and <code>node2</code> such that the <strong>maximum</strong> of the distances from <code>node1</code> and <code>node2</code> to that node is <strong>minimized</strong>.</p>

<p>If there are multiple such nodes, return the node with the <strong>smallest index</strong>. If no node is reachable from both, return <code>-1</code>.</p>

<p>Note: The graph may contain cycles.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> edges = [2,2,3,-1], node1 = 0, node2 = 1
<strong>Output:</strong> 2

<strong>Explanation:</strong> 
- From node 0 → 2 → 3
- From node 1 → 2 → 3
- Node 2 is reachable from both with distance 1. Max(1, 1) = 1 → optimal.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> edges = [1,2,-1], node1 = 0, node2 = 2
<strong>Output:</strong> 2

<strong>Explanation:</strong> 
- From node 0 → 1 → 2 (distance 2)
- From node 2 → 2 (distance 0)
- Max(2, 0) = 2 → optimal.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == edges.length</code></li>
  <li><code>2 <= n <= 10<sup>5</sup></code></li>
  <li><code>-1 <= edges[i] < n</code></li>
  <li><code>edges[i] != i</code></li>
  <li><code>0 <= node1, node2 < n</code></li>
</ul>
</div>
