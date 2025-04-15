### <h2><a href="https://leetcode.com/problems/count-good-triplets-in-an-array/">2179. Count Good Triplets in an Array</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given two 0-indexed arrays <code>nums1</code> and <code>nums2</code>, each of length <code>n</code>, and both are permutations of the integers from <code>0</code> to <code>n - 1</code>.</p>  

<p>A triplet <code>(x, y, z)</code> is considered <strong>good</strong> if and only if the following conditions are satisfied:</p>  
<ul>  
<li>All values are distinct and satisfy <code>0 <= x, y, z <= n - 1</code></li>  
<li><code>pos1x &lt; pos1y &lt; pos1z</code>, where <code>pos1v</code> is the index of value <code>v</code> in <code>nums1</code></li>  
<li><code>pos2x &lt; pos2y &lt; pos2z</code>, where <code>pos2v</code> is the index of value <code>v</code> in <code>nums2</code></li>  
</ul>  

<p>Return the total number of good triplets.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums1 = [2,0,1,3], nums2 = [0,1,2,3]  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
The possible triplets with increasing indices in nums1 are:  
(2,0,1), (2,0,3), (2,1,3), and (0,1,3).  
Out of these, only (0,1,3) satisfies increasing indices in nums2 as well.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums1 = [4,0,1,3,2], nums2 = [4,1,0,2,3]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The 4 good triplets are: (4,0,3), (4,0,2), (4,1,3), and (4,1,2).  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == nums1.length == nums2.length</code></li>  
<li><code>3 <= n <= 10<sup>5</sup></code></li>  
<li><code>0 <= nums1[i], nums2[i] <= n - 1</code></li>  
<li><code>nums1</code> and <code>nums2</code> are permutations of the integers from <code>0</code> to <code>n - 1</code></li>  
</ul>  
</div>
