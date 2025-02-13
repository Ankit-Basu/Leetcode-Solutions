### <h2><a href="https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/">3066. Minimum Operations to Exceed Threshold Value II</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> integer array <code>nums</code>, and an integer <code>k</code>.</p>  

<p>You are allowed to perform some operations on <code>nums</code>, where in a single operation, you can:</p>  
<ul>  
<li>Select the two smallest integers <code>x</code> and <code>y</code> from <code>nums</code>.</li>  
<li>Remove <code>x</code> and <code>y</code> from <code>nums</code>.</li>  
<li>Insert <code>(min(x, y) * 2 + max(x, y))</code> at any position in the array.</li>  
</ul>  

<p>Note that you can only apply the described operation if <code>nums</code> contains at least two elements.</p>  

<p>Return the minimum number of operations needed so that all elements of the array are greater than or equal to <code>k</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,11,10,1,3], k = 10  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
In the first operation, we remove elements 1 and 2, then add <code>1 * 2 + 2</code> to <code>nums</code>. <code>nums</code> becomes <code>[4, 11, 10, 3]</code>.  
In the second operation, we remove elements 3 and 4, then add <code>3 * 2 + 4</code> to <code>nums</code>. <code>nums</code> becomes <code>[10, 11, 10]</code>.  
At this stage, all the elements of <code>nums</code> are greater than or equal to 10, so we can stop.</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,1,2,4,9], k = 20  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
After one operation, <code>nums</code> becomes <code>[2, 4, 9, 3]</code>.  
After two operations, <code>nums</code> becomes <code>[7, 4, 9]</code>.  
After three operations, <code>nums</code> becomes <code>[15, 9]</code>.  
After four operations, <code>nums</code> becomes <code>[33]</code>.  
At this stage, all the elements of <code>nums</code> are greater than 20, so we can stop.</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>2 <= nums.length <= 2 * 10<sup>5</sup></code></li>  
<li><code>1 <= nums[i] <= 10<sup>9</sup></code></li>  
<li><code>1 <= k <= 10<sup>9</sup></code></li>  
<li>The input is generated such that an answer always exists.</li>  
</ul>  
</div>  
