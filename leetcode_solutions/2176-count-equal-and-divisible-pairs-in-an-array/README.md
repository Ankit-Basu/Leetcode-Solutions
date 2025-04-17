### <h2><a href="https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/">2176. Count Equal and Divisible Pairs in an Array</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a 0-indexed integer array <code>nums</code> of length <code>n</code> and an integer <code>k</code>, return the number of pairs <code>(i, j)</code> where <code>0 <= i &lt; j &lt; n</code>, such that:</p>  
<ul>  
  <li><code>nums[i] == nums[j]</code>, and</li>  
  <li><code>(i * j)</code> is divisible by <code>k</code>.</li>  
</ul>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [3,1,2,2,2,1,3], k = 2  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The 4 valid pairs are:  
- (0,6): nums[0] == nums[6], and 0 * 6 = 0, divisible by 2.  
- (2,3): nums[2] == nums[3], and 2 * 3 = 6, divisible by 2.  
- (2,4): nums[2] == nums[4], and 2 * 4 = 8, divisible by 2.  
- (3,4): nums[3] == nums[4], and 3 * 4 = 12, divisible by 2.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,2,3,4], k = 1  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> No repeated values, hence no valid pairs.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 100</code></li>  
<li><code>1 <= nums[i], k <= 100</code></li>  
</ul>  
</div>
