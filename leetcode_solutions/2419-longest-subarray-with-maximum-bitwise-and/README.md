<h2><a href="https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/">2419. Longest Subarray With Maximum Bitwise AND</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given an integer array <code>nums</code> of size <code>n</code>.</p>

<p>Consider a non-empty subarray from <code>nums</code> that has the maximum possible bitwise <strong>AND</strong>.</p>

<p>In other words, let <code>k</code> be the maximum value of the bitwise AND of any subarray of <code>nums</code>. Then, only subarrays with a bitwise AND equal to <code>k</code> should be considered.</p>

<p>Return the length of the longest such subarray.</p>

<p>The bitwise AND of an array is the bitwise AND of all the numbers in it.</p>

<p>A subarray is a contiguous sequence of elements within an array.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,3,2,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The maximum possible bitwise AND of a subarray is 3.
The longest subarray with that value is [3,3], so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The maximum possible bitwise AND of a subarray is 4.
The longest subarray with that value is [4], so we return 1.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 10<sup>5</sup></code></li>
  <li><code>1 &le; nums[i] &le; 10<sup>6</sup></code></li>
</ul>
</div>
