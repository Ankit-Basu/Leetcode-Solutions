### <h2><a href="https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/">1752. Check if Array Is Sorted and Rotated</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given an array <code>nums</code>, return <code>true</code> if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return <code>false</code>.</p>  

<p>There may be duplicates in the original array.</p>  

<p><strong>Note:</strong> An array <code>A</code> rotated by <code>x</code> positions results in an array <code>B</code> of the same length such that <code>A[i] == B[(i+x) % A.length]</code>, where <code>%</code> is the modulo operation.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [3,4,5,1,2]  
<strong>Output:</strong> true  
<strong>Explanation:</strong>  
<code>[1,2,3,4,5]</code> is the original sorted array.  
You can rotate the array by <code>x = 3</code> positions to begin on the element of value <code>3</code>: <code>[3,4,5,1,2]</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,1,3,4]  
<strong>Output:</strong> false  
<strong>Explanation:</strong>  
There is no sorted array once rotated that can make <code>nums</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,2,3]  
<strong>Output:</strong> true  
<strong>Explanation:</strong>  
<code>[1,2,3]</code> is the original sorted array.  
You can rotate the array by <code>x = 0</code> positions (i.e. no rotation) to make <code>nums</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 100</code></li>  
<li><code>1 <= nums[i] <= 100</code></li>  
</ul>  
</div>  
