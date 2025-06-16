### <h2><a href="https://leetcode.com/problems/maximum-difference-between-increasing-elements/">2016. Maximum Difference Between Increasing Elements</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>n</code>, find the <strong>maximum difference</strong> between <code>nums[j] - nums[i]</code> such that <code>0 <= i < j < n</code> and <code>nums[i] < nums[j]</code>.</p>

<p>Return the maximum difference. If no such <code>i</code> and <code>j</code> exist, return <code>-1</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [7,1,5,4]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The maximum difference is <code>5 - 1 = 4</code> with <code>i = 1</code> and <code>j = 2</code>.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [9,4,3,2]  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
There is no <code>i < j</code> such that <code>nums[i] < nums[j]</code>.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [1,5,2,10]  
<strong>Output:</strong> 9  
<strong>Explanation:</strong>  
The maximum difference is <code>10 - 1 = 9</code> with <code>i = 0</code> and <code>j = 3</code>.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>2 <= n <= 1000</code></li>
  <li><code>1 <= nums[i] <= 10⁹</code></li>
</ul>
</div>
