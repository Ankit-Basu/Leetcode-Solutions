### <h2><a href="https://leetcode.com/problems/count-largest-group/">1399. Count Largest Group</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given an integer <code>n</code>.</p>

<p>Each number from <code>1</code> to <code>n</code> is grouped based on the sum of its digits. A group contains all numbers that share the same digit sum.</p>

<p>Return the number of groups that have the largest size.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 13
<strong>Output:</strong> 4
<strong>Explanation:</strong> The groups based on digit sums from 1 to 13 are:
[1,10], [2,11], [3,12], [4,13], [5], [6], [7], [8], [9]
The sizes of the groups are: 2, 2, 2, 2, 1, 1, 1, 1, 1
The largest size is 2, and there are 4 groups of that size.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> The groups are: [1], [2]
Each has size 1. Hence, there are 2 groups with the largest size.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= n <= 10<sup>4</sup></code></li>
</ul>
</div>
