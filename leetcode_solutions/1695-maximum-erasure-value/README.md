<h2><a href="https://leetcode.com/problems/maximum-erasure-value/">1695. Maximum Erasure Value</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an array of positive integers <code>nums</code> and want to erase a subarray containing only <strong>unique</strong> elements. The score you get by erasing the subarray is equal to the <strong>sum</strong> of its elements.</p>

<p>Return the <strong>maximum score</strong> you can get by erasing exactly one such subarray.</p>

<p>Note: A subarray is a contiguous part of the original array.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [4,2,4,5,6]
<strong>Output:</strong> 17
<strong>Explanation:</strong> The subarray [2,4,5,6] contains all unique elements with sum 17.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [5,2,1,2,5,2,1,2,5]
<strong>Output:</strong> 8
<strong>Explanation:</strong> The subarray [5,2,1] or [1,2,5] both contain only unique elements and have sum 8.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 10<sup>5</sup></code></li>
  <li><code>1 &le; nums[i] &le; 10<sup>4</sup></code></li>
</ul>
</div>
