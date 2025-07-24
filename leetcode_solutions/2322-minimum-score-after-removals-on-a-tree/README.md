<h2><a href="https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/">2322. Minimum Score After Removals on a Tree</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You are given an undirected, connected tree with <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code> and <code>n - 1</code> edges.</p>

<p>You are also given a 0-indexed integer array <code>nums</code> of length <code>n</code> where <code>nums[i]</code> represents the value of the <code>i<sup>th</sup></code> node, and a 2D array <code>edges</code> where <code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates there is an edge between nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code>.</p>

<p>Your task is to remove two distinct edges from the tree to form three connected components. For any such pair of removed edges:</p>
<ul>
  <li>Compute the XOR of all node values in each of the three components.</li>
  <li>The score is the difference between the maximum and minimum of the three XOR values.</li>
</ul>

<p>Return the <strong>minimum score</strong> that can be achieved by removing any pair of edges.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,5,5,4,11], edges = [[0,1],[1,2],[1,3],[3,4]]
<strong>Output:</strong> 9
<strong>Explanation:</strong> 
Remove edges [1,2] and [3,4]. The three components have node values:
- [1,3,4] → 5 ^ 4 ^ 11 = 10
- [0] → 1
- [2] → 5
Score = 10 - 1 = 9
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [5,5,2,4,4,2], edges = [[0,1],[1,2],[5,2],[4,3],[1,3]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> 
Remove edges [1,0] and [3,4]. The three components have node values:
- [3,4] → 4 ^ 4 = 0
- [1,0] → 5 ^ 5 = 0
- [2,5] → 2 ^ 2 = 0
Score = 0 - 0 = 0
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>3 &le; n &le; 1000</code></li>
  <li><code>1 &le; nums[i] &le; 10<sup>8</sup></code></li>
  <li><code>edges.length == n - 1</code></li>
  <li><code>edges[i].length == 2</code></li>
  <li><code>0 &le; a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li>
  <li><code>a<sub>i</sub> != b<sub>i</sub></code></li>
  <li><code>edges</code> represents a valid tree.</li>
</ul>
</div>
