### <h2><a href="https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii/">2874. Maximum Value of an Ordered Triplet II</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> integer array <code>nums</code>.</p>  

<p>Return the maximum value over all triplets of indices <code>(i, j, k)</code> such that <code>i < j < k</code>. If all such triplets have a negative value, return <code>0</code>.</p>  

<p>The value of a triplet of indices <code>(i, j, k)</code> is equal to <code>(nums[i] - nums[j]) * nums[k]</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [12,6,1,2,7]  
<strong>Output:</strong> 77  
<strong>Explanation:</strong> The value of the triplet <code>(0, 2, 4)</code> is <code>(nums[0] - nums[2]) * nums[4] = 77</code>.  
It can be shown that there are no ordered triplets of indices with a value greater than <code>77</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,10,3,4,19]  
<strong>Output:</strong> 133  
<strong>Explanation:</strong> The value of the triplet <code>(1, 2, 4)</code> is <code>(nums[1] - nums[2]) * nums[4] = 133</code>.  
It can be shown that there are no ordered triplets of indices with a value greater than <code>133</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,2,3]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> The only ordered triplet of indices <code>(0, 1, 2)</code> has a negative value of <code>(nums[0] - nums[1]) * nums[2] = -3</code>. Hence, the answer would be <code>0</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 ≤ nums.length ≤ 10⁵</code></li>  
<li><code>1 ≤ nums[i] ≤ 10⁶</code></li>  
</ul>  
</div>  
