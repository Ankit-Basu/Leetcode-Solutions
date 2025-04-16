### <h2><a href="https://leetcode.com/problems/count-the-number-of-good-subarrays/">2537. Count the Number of Good Subarrays</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return the number of <strong>good subarrays</strong> of <code>nums</code>.</p>  

<p>A subarray <code>arr</code> is considered <strong>good</strong> if there are at least <code>k</code> pairs of indices <code>(i, j)</code> such that <code>i &lt; j</code> and <code>arr[i] == arr[j]</code>.</p>  

<p>A <strong>subarray</strong> is a contiguous non-empty sequence of elements within an array.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,1,1,1,1], k = 10  
<strong>Output:</strong> 1  
<strong>Explanation:</strong> The only good subarray is the entire array itself, which contains 10 pairs.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [3,1,4,3,2,2,4], k = 2  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> There are 4 good subarrays with at least 2 equal pairs:  
- [3,1,4,3,2,2] has 2 pairs.  
- [3,1,4,3,2,2,4] has 3 pairs.  
- [1,4,3,2,2,4] has 2 pairs.  
- [4,3,2,2,4] has 2 pairs.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 10<sup>5</sup></code></li>  
<li><code>1 <= nums[i], k <= 10<sup>9</sup></code></li>  
</ul>  
</div>
