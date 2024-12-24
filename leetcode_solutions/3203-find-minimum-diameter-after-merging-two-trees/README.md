<h2><a href="https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/">3203. Find Minimum Diameter After Merging Two Trees</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>There exist two undirected trees with <code>n</code> and <code>m</code> nodes, numbered from <code>0</code> to <code>n - 1</code> and <code>0</code> to <code>m - 1</code>, respectively. You are given two 2D integer arrays <code>edges1</code> and <code>edges2</code> of lengths <code>n - 1</code> and <code>m - 1</code>, respectively, where <code>edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that there is an edge between nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code> in the first tree, and <code>edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> indicates that there is an edge between nodes <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code> in the second tree.</p>  

<p>You must connect one node from the first tree with another node from the second tree with an edge.</p>  

<p>Return the minimum possible diameter of the resulting tree.</p>  

<p>The <strong>diameter</strong> of a tree is the length of the longest path between any two nodes in the tree.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> edges1 = [[0,1],[0,2],[0,3]], edges2 = [[0,1]]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
We can obtain a tree of diameter <code>3</code> by connecting node <code>0</code> from the first tree with any node from the second tree.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> edges1 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]], edges2 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
We can obtain a tree of diameter <code>5</code> by connecting node <code>0</code> from the first tree with node <code>0</code> from the second tree.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= n, m <= 10<sup>5</sup></code></li>  
<li><code>edges1.length == n - 1</code></li>  
<li><code>edges2.length == m - 1</code></li>  
<li><code>edges1[i].length == edges2[i].length == 2</code></li>  
<li><code>edges1[i] = [a<sub>i</sub>, b<sub>i</sub>]</code></li>  
<li><code>0 <= a<sub>i</sub>, b<sub>i</sub> < n</code></li>  
<li><code>edges2[i] = [u<sub>i</sub>, v<sub>i</sub>]</code></li>  
<li><code>0 <= u<sub>i</sub>, v<sub>i</sub> < m</code></li>  
<li>The input is generated such that <code>edges1</code> and <code>edges2</code> represent valid trees.</li>  
</ul>  
</div>
