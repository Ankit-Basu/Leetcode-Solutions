### <h2><a href="https://leetcode.com/problems/distribute-candies-among-children-ii/">2929. Distribute Candies Among Children II</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given two positive integers <code>n</code> and <code>limit</code>.</p>

<p>Return the total number of ways to distribute <code>n</code> candies among <strong>3 children</strong> such that <strong>no child</strong> receives more than <code>limit</code> candies.</p>

<p>Each child can receive any number of candies from <code>0</code> up to <code>limit</code>, and the total distributed must sum to <code>n</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 5, limit = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
Valid distributions are:
- (1, 2, 2)
- (2, 1, 2)
- (2, 2, 1)
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 3, limit = 3
<strong>Output:</strong> 10
<strong>Explanation:</strong> 
Valid distributions are:
- (0, 0, 3)
- (0, 1, 2)
- (0, 2, 1)
- (0, 3, 0)
- (1, 0, 2)
- (1, 1, 1)
- (1, 2, 0)
- (2, 0, 1)
- (2, 1, 0)
- (3, 0, 0)
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= n <= 10<sup>6</sup></code></li>
  <li><code>1 <= limit <= 10<sup>6</sup></code></li>
</ul>
</div>
