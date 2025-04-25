### <h2><a href="https://leetcode.com/problems/count-of-interesting-subarrays/">2845. Count of Interesting Subarrays</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed integer array <code>nums</code>, an integer <code>modulo</code>, and an integer <code>k</code>.</p>

<p>Your task is to find the count of subarrays that are <strong>interesting</strong>.</p>

<p>A subarray <code>nums[l..r]</code> is interesting if the following condition holds:</p>
<ul>
<li>Let <code>cnt</code> be the number of indices <code>i</code> in the range <code>[l, r]</code> such that <code>nums[i] % modulo == k</code>. Then, <code>cnt % modulo == k</code>.</li>
</ul>

<p>Return an integer denoting the count of interesting subarrays.</p>

<p><strong>Note:</strong> A subarray is a contiguous non-empty sequence of elements within an array.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [3,2,4], modulo = 2, k = 1
<strong>Output:</strong> 3
<strong>Explanation:</strong> The interesting subarrays are:
- [3]
- [3,2]
- [3,2,4]
Each has exactly 1 element satisfying nums[i] % 2 == 1, and 1 % 2 == 1.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [3,1,9,6], modulo = 3, k = 0
<strong>Output:</strong> 2
<strong>Explanation:</strong> The interesting subarrays are:
- [3,1,9,6] → three elements satisfy nums[i] % 3 == 0 → 3 % 3 == 0
- [1] → no elements satisfy the condition → 0 % 3 == 0
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= nums.length <= 10<sup>5</sup></code></li>
  <li><code>1 <= nums[i] <= 10<sup>9</sup></code></li>
  <li><code>1 <= modulo <= 10<sup>9</sup></code></li>
  <li><code>0 <= k < modulo</code></li>
</ul>
</div>
