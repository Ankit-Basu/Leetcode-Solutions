<h2><a href="https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/">3097. Shortest Subarray With OR at Least K II</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an array <code>nums</code> of non-negative integers and an integer <code>k</code>.</p>

<p>An array is called special if the bitwise OR of all of its elements is at least <code>k</code>.</p>

<p>Return the length of the shortest special non-empty <strong>subarray</strong> of <code>nums</code>, or return <code>-1</code> if no special subarray exists.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3], k = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> The subarray [3] has OR value of 3. Hence, we return 1.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,1,8], k = 10
<strong>Output:</strong> 3
<strong>Explanation:</strong> The subarray [2,1,8] has OR value of 11. Hence, we return 3.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,2], k = 0
<strong>Output:</strong> 1
<strong>Explanation:</strong> The subarray [1] has OR value of 1. Hence, we return 1.</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>
</div>