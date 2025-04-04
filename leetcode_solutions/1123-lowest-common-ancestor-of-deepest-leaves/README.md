### <h2><a href="https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/">1123. Lowest Common Ancestor of Deepest Leaves</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given the <code>root</code> of a binary tree, return the <strong>lowest common ancestor</strong> of its <strong>deepest leaves</strong>.</p>  

<p>Recall that:</p>  
<ul>  
<li>A node of a binary tree is a leaf if and only if it has no children.</li>  
<li>The depth of the root is <code>0</code>. If the depth of a node is <code>d</code>, then the depth of each of its children is <code>d + 1</code>.</li>  
<li>The lowest common ancestor of a set <code>S</code> of nodes is the node <code>A</code> with the largest depth such that every node in <code>S</code> is in the subtree with root <code>A</code>.</li>  
</ul>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4]  
<strong>Output:</strong> [2,7,4]  
<strong>Explanation:</strong> We return the node with value <code>2</code>.  
The deepest leaves are <code>7</code> and <code>4</code>.  
Their lowest common ancestor is <code>2</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> root = [1]  
<strong>Output:</strong> [1]  
<strong>Explanation:</strong> The root is the deepest node in the tree and is its own LCA.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> root = [0,1,3,null,2]  
<strong>Output:</strong> [2]  
<strong>Explanation:</strong> The deepest leaf is <code>2</code>. The LCA of a single node is the node itself.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>  
<li><code>0 ≤ Node.val ≤ 1000</code></li>  
<li>The values of the nodes are unique.</li>  
</ul>  
</div>  
