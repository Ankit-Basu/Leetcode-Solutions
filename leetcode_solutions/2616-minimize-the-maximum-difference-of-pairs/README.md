### <h2><a href="https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/">3423. Maximum Difference Between Adjacent Elements in a Circular Array</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a circular array <code>nums</code>, find the maximum absolute difference between adjacent elements.</p>  

<p><strong>Note:</strong> In a circular array, the first and last elements are also considered adjacent.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [1,2,4]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
Because <code>nums</code> is circular, <code>nums[0]</code> and <code>nums[2]</code> are adjacent.  
They have the maximum absolute difference of <code>|4 - 1| = 3</code>.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [-5,-10,-5]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
The adjacent elements <code>nums[0]</code> and <code>nums[1]</code> have the maximum absolute difference of <code>|-5 - (-10)| = 5</code>.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>2 <= nums.length <= 100</code></li>
  <li><code>-100 <= nums[i] <= 100</code></li>
</ul>
</div>
