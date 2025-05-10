### <h2><a href="https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/">2918. Minimum Equal Sum of Two Arrays After Replacing Zeros</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given two arrays <code>nums1</code> and <code>nums2</code> consisting of positive integers.</p>  

<p>You have to replace all the <code>0</code>'s in both arrays with strictly positive integers such that the sum of elements of both arrays becomes equal.</p>  

<p>Return the <strong>minimum equal sum</strong> you can obtain, or <code>-1</code> if it is impossible.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> nums1 = [3,2,0,1,0], nums2 = [6,5,0]
<strong>Output:</strong> 12
<strong>Explanation:</strong>
Replace 0's as follows:
- nums1: [3,2,2,1,4]
- nums2: [6,5,1]
Both have sum = 12, which is the minimum possible.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> nums1 = [2,0,2,0], nums2 = [1,4]
<strong>Output:</strong> -1
<strong>Explanation:</strong>
It is impossible to make the sum of both arrays equal.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 &le; nums1.length, nums2.length &le; 10<sup>5</sup></code></li>  
  <li><code>0 &le; nums1[i], nums2[i] &le; 10<sup>6</sup></code></li>  
</ul>  
</div>
