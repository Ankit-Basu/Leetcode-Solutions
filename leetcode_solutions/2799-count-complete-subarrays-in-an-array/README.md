### <h2><a href="https://leetcode.com/problems/count-complete-subarrays-in-an-array/">2799. Count Complete Subarrays in an Array</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an array <code>nums</code> consisting of positive integers.</p>

<p>A subarray of an array is called <strong>complete</strong> if the number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.</p>

<p>Return the number of complete subarrays.</p>

<p>A subarray is a contiguous non-empty part of an array.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,3,1,2,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The complete subarrays are:
- [1,3,1,2]
- [1,3,1,2,2]
- [3,1,2]
- [3,1,2,2]
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [5,5,5,5]
<strong>Output:</strong> 10
<strong>Explanation:</strong> There is only one distinct number (5), so every subarray is complete.
There are 10 subarrays in total.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= nums.length <= 1000</code></li>
  <li><code>1 <= nums[i] <= 2000</code></li>
</ul>
</div>
