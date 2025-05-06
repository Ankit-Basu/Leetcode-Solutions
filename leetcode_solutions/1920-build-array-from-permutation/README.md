### <h2><a href="https://leetcode.com/problems/build-array-from-permutation/">1920. Build Array from Permutation</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a <strong>zero-based permutation</strong> <code>nums</code> (0-indexed), build an array <code>ans</code> of the same length where <code>ans[i] = nums[nums[i]]</code> for each <code>0 &le; i &lt; nums.length</code> and return it.</p>

<p>A <strong>zero-based permutation</strong> <code>nums</code> is an array of <strong>distinct</strong> integers from <code>0</code> to <code>nums.length - 1</code> (inclusive).</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [0,2,1,5,3,4]
<strong>Output:</strong> [0,1,2,4,5,3]
<strong>Explanation:</strong> 
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]  
    = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]  
    = [0,1,2,4,5,3]
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [5,0,1,2,3,4]
<strong>Output:</strong> [4,5,0,1,2,3]
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 1000</code></li>
  <li><code>0 &le; nums[i] &lt; nums.length</code></li>
  <li>The elements in <code>nums</code> are <strong>distinct</strong>.</li>
</ul>
</div>
