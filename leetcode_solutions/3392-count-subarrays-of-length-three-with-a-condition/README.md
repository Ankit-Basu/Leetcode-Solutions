### <h2><a href="https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/">3392. Count Subarrays of Length Three With a Condition</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given an integer array <code>nums</code>, return the number of subarrays of length 3 such that the sum of the first and third numbers equals exactly half of the second number.</p>

<p><strong>Note:</strong> A subarray is a contiguous non-empty sequence of elements within an array.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,2,1,4,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Only the subarray [1,4,1] contains exactly 3 elements where the sum of the first and third numbers equals half the middle number.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> [1,1,1] is the only subarray of length 3. However, its first and third numbers do not add to half the middle number.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>3 <= nums.length <= 100</code></li>
  <li><code>-100 <= nums[i] <= 100</code></li>
</ul>
</div>
