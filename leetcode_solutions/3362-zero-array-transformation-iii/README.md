### <h2><a href="https://leetcode.com/problems/zero-array-transformation-iii/">3362. Zero Array Transformation III</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> of length <code>n</code> and a 2D array <code>queries</code> where <code>queries[i] = [li, ri]</code>.</p>  

<p>Each <code>queries[i]</code> represents the following action on <code>nums</code>:</p>  
<ul>  
  <li>Decrement the value at each index in the range <code>[li, ri]</code> in <code>nums</code> by <strong>at most</strong> 1.</li>  
  <li>The amount by which the value is decremented can be chosen independently for each index.</li>  
</ul>  

<p>A <strong>Zero Array</strong> is an array with all its elements equal to <code>0</code>.</p>  

<p>Return the <strong>maximum number of elements</strong> that can be removed from <code>queries</code>, such that <code>nums</code> can still be converted to a Zero Array using the <strong>remaining queries</strong>. If it is <strong>not possible</strong> to convert <code>nums</code> to a Zero Array, return <code>-1</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> nums = [2,0,2], queries = [[0,2],[0,2],[1,1]]  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
After removing <code>queries[2]</code>, nums can still be converted to a zero array.  
- Use <code>queries[0]</code>: decrement nums[0] and nums[2] by 1.  
- Use <code>queries[1]</code>: decrement nums[0] and nums[2] by 1.  
Final array = [0,0,0].  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> nums = [1,1,1,1], queries = [[1,3],[0,2],[1,3],[1,2]]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
We can remove <code>queries[2]</code> and <code>queries[3]</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> nums = [1,2,3,4], queries = [[0,3]]  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
<code>nums</code> cannot be converted to a Zero Array even after using all the queries.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 <= nums.length <= 10<sup>5</sup></code></li>  
  <li><code>0 <= nums[i] <= 10<sup>5</sup></code></li>  
  <li><code>1 <= queries.length <= 10<sup>5</sup></code></li>  
  <li><code>queries[i].length == 2</code></li>  
  <li><code>0 <= li <= ri < nums.length</code></li>  
</ul>  
</div>
