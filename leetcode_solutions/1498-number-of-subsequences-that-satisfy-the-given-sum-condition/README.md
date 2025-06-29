### <h2><a href="https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/">1498. Number of Subsequences That Satisfy the Given Sum Condition</a></h2>
<h3>Medium</h3>
<hr>

<p>You are given an array of integers <code>nums</code> and an integer <code>target</code>.</p>

<p>Return the number of non-empty subsequences of <code>nums</code> such that the sum of the minimum and maximum element in it is less than or equal to <code>target</code>.</p>

<p>Since the answer may be too large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [3,5,6,7], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> Valid subsequences:
[3], [3,5], [3,6], [3,5,6]
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [3,3,6,8], target = 10
<strong>Output:</strong> 6
<strong>Explanation:</strong> Valid subsequences:
[3], [3], [3,3], [3,6], [3,6], [3,3,6]
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [2,3,3,4,6,7], target = 12
<strong>Output:</strong> 61
<strong>Explanation:</strong> Out of 63 non-empty subsequences, only [6,7] and [7] are invalid.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums.length <= 10<sup>5</sup></code></li>
  <li><code>1 <= nums[i] <= 10<sup>6</sup></code></li>
  <li><code>1 <= target <= 10<sup>6</sup></code></li>
</ul>
