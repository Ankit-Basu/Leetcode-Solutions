### <h2><a href="https://leetcode.com/problems/count-subarrays-with-fixed-bounds/">2444. Count Subarrays With Fixed Bounds</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> and two integers <code>minK</code> and <code>maxK</code>.</p>

<p>A <strong>fixed-bound subarray</strong> of <code>nums</code> is a subarray that satisfies the following conditions:</p>
<ul>
<li>The minimum value in the subarray is equal to <code>minK</code>.</li>
<li>The maximum value in the subarray is equal to <code>maxK</code>.</li>
</ul>

<p>Return the number of fixed-bound subarrays.</p>

<p><strong>Note:</strong> A subarray is a contiguous part of an array.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,3,5,2,7,5], minK = 1, maxK = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> The fixed-bound subarrays are:
- [1,3,5]
- [1,3,5,2]
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,1,1,1], minK = 1, maxK = 1
<strong>Output:</strong> 10
<strong>Explanation:</strong> Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 <= nums.length <= 10<sup>5</sup></code></li>
  <li><code>1 <= nums[i], minK, maxK <= 10<sup>6</sup></code></li>
</ul>
</div>
