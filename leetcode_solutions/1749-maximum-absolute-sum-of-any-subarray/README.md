### <h2><a href="https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/">1749. Maximum Absolute Sum of Any Subarray</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code>. The absolute sum of a subarray <code>[nums[l], nums[l+1], ..., nums[r-1], nums[r]]</code> is <code>abs(nums[l] + nums[l+1] + ... + nums[r-1] + nums[r])</code>.</p>  

<p>Return the maximum absolute sum of any (possibly empty) subarray of <code>nums</code>.</p>  

<p>Note that <code>abs(x)</code> is defined as follows:</p>  
<ul>  
<li>If <code>x</code> is a negative integer, then <code>abs(x) = -x</code>.</li>  
<li>If <code>x</code> is a non-negative integer, then <code>abs(x) = x</code>.</li>  
</ul>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,-3,2,3,-4]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,-5,1,-4,3,-2]  
<strong>Output:</strong> 8  
<strong>Explanation:</strong>  
The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 10^5</code></li>  
<li><code>-10^4 <= nums[i] <= 10^4</code></li>  
</ul>  
</div>  
