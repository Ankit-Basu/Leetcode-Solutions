<h2><a href="https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/">2415. Reverse Odd Levels of Binary Tree</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given the root of a perfect binary tree, reverse the node values at each odd level of the tree.</p>  

<p>For example, suppose the node values at level 3 are <code>[2,1,3,4,7,11,29,18]</code>, then it should become <code>[18,29,11,7,4,3,1,2]</code>.  
Return the root of the reversed tree.</p>  

<p>A binary tree is perfect if all parent nodes have two children and all leaves are on the same level.</p>  

<p>The level of a node is the number of edges along the path between it and the root node.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> root = [2,3,5,8,13,21,34]  
<strong>Output:</strong> [2,5,3,8,13,21,34]  
<strong>Explanation:</strong>  
The tree has only one odd level.  
The nodes at level 1 are 3, 5 respectively, which are reversed and become 5, 3.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> root = [7,13,11]  
<strong>Output:</strong> [7,11,13]  
<strong>Explanation:</strong>  
The nodes at level 1 are 13, 11, which are reversed and become 11, 13.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> root = [0,1,2,0,0,0,0,1,1,1,1,2,2,2,2]  
<strong>Output:</strong> [0,2,1,0,0,0,0,2,2,2,2,1,1,1,1]  
<strong>Explanation:</strong>  
The odd levels have non-zero values.  
The nodes at level 1 were 1, 2, and are 2, 1 after the reversal.  
The nodes at level 3 were 1, 1, 1, 1, 2, 2, 2, 2, and are 2, 2, 2, 2, 1, 1, 1, 1 after the reversal.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li>The number of nodes in the tree is in the range <code>[1, 214]</code>.</li>  
<li><code>0 <= Node.val <= 10<sup>5</sup></code></li>  
<li><code>root</code> is a perfect binary tree.</li>  
</ul>  
</div>  
