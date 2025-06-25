### <h2><a href="https://leetcode.com/problems/kth-smallest-product-of-two-sorted-arrays/">2040. Kth Smallest Product of Two Sorted Arrays</a></h2>
<h3>Hard</h3>
<hr>
<div>

<p>You are given two sorted 0-indexed integer arrays <code>nums1</code> and <code>nums2</code> as well as an integer <code>k</code>. Return the <code>k<sup>th</sup></code> (1-based) smallest product of <code>nums1[i] * nums2[j]</code> where <code>0 <= i < nums1.length</code> and <code>0 <= j < nums2.length</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums1 = [2,5], nums2 = [3,4], k = 2
<strong>Output:</strong> 8
<strong>Explanation:</strong> The 2 smallest products are:
- 2 * 3 = 6
- 2 * 4 = 8
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums1 = [-4,-2,0,3], nums2 = [2,4], k = 6
<strong>Output:</strong> 0
<strong>Explanation:</strong> The 6 smallest products are:
- (-4) * 4 = -16
- (-4) * 2 = -8
- (-2) * 4 = -8
- (-2) * 2 = -4
- 0 * 2 = 0
- 0 * 4 = 0
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums1 = [-2,-1,0,1,2], nums2 = [-3,-1,2,4,5], k = 3
<strong>Output:</strong> -6
<strong>Explanation:</strong> The 3 smallest products are:
- (-2) * 5 = -10
- (-2) * 4 = -8
- 2 * (-3) = -6
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums1.length, nums2.length <= 5 * 10<sup>4</sup></code></li>
  <li><code>-10<sup>5</sup> <= nums1[i], nums2[j] <= 10<sup>5</sup></code></li>
  <li><code>1 <= k <= nums1.length * nums2.length</code></li>
  <li><code>nums1</code> and <code>nums2</code> are sorted in non-decreasing order.</li>
</ul>

</div>
