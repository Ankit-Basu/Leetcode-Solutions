### <h2><a href="https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/">2966. Divide Array Into Arrays With Max Difference</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> of size <code>n</code> where <code>n</code> is a multiple of 3, and a positive integer <code>k</code>.</p>

<p>Divide the array <code>nums</code> into <code>n / 3</code> groups of size 3 such that the difference between any two elements in each group is less than or equal to <code>k</code>.</p>

<p>Return a 2D array containing all the groups. If it is impossible to satisfy the conditions, return an empty array. If there are multiple valid answers, return any of them.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [1,3,4,8,7,9,3,5,1], k = 2  
<strong>Output:</strong> [[1,1,3],[3,4,5],[7,8,9]]  
<strong>Explanation:</strong>  
Each group has max difference ≤ 2.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [2,4,2,2,5,2], k = 2  
<strong>Output:</strong> []  
<strong>Explanation:</strong>  
No valid division exists as one group will have a difference > 2.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11], k = 14  
<strong>Output:</strong> [[2,2,12],[4,8,5],[5,9,7],[7,8,5],[5,9,10],[11,12,2]]  
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>1 <= n <= 10⁵</code></li>
  <li><code>n</code> is a multiple of 3</li>
  <li><code>1 <= nums[i] <= 10⁵</code></li>
  <li><code>1 <= k <= 10⁵</code></li>
</ul>
</div>
