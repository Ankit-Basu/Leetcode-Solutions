### <h2><a href="https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/">689. Maximum Sum of 3 Non-Overlapping Subarrays</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>Given an integer array <code>nums</code> and an integer <code>k</code>, find three non-overlapping subarrays of length <code>k</code> with maximum sum and return them.</p>  

<p>Return the result as a list of indices representing the starting position of each interval (0-indexed). If there are multiple answers, return the lexicographically smallest one.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> nums = [1,2,1,2,6,7,5,1], k = 2  
<strong>Output:</strong> [0,3,5]  
<strong>Explanation:</strong>  
Subarrays [1, 2], [2, 6], [7, 5] correspond to the starting indices [0, 3, 5].  
We could have also taken [2, 1], but an answer of [1, 3, 5] would be lexicographically larger.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> nums = [1,2,1,2,1,2,1,2,1], k = 2  
<strong>Output:</strong> [0,2,4]  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 2 * 10<sup>4</sup></code></li>  
<li><code>1 <= nums[i] < 2<sup>16</sup></code></li>  
<li><code>1 <= k <= floor(nums.length / 3)</code></li>  
</ul>  
</div>  
