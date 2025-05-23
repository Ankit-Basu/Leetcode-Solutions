### <h2><a href="https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/">3191. Minimum Operations to Make Binary Array Elements Equal to One I</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a binary array <code>nums</code>.</p>  

<p>You can do the following operation on the array any number of times (possibly zero):</p>  

<ul>  
<li>Choose any 3 consecutive elements from the array and flip all of them.</li>  
<li>Flipping an element means changing its value from <code>0</code> to <code>1</code>, and from <code>1</code> to <code>0</code>.</li>  
</ul>  

<p>Return the minimum number of operations required to make all elements in <code>nums</code> equal to <code>1</code>. If it is impossible, return <code>-1</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [0,1,1,1,0,0]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
We can do the following operations:  
- Choose the elements at indices <code>0, 1, and 2</code>. The resulting array is <code>[1,0,0,1,0,0]</code>.  
- Choose the elements at indices <code>1, 2, and 3</code>. The resulting array is <code>[1,1,1,0,0,0]</code>.  
- Choose the elements at indices <code>3, 4, and 5</code>. The resulting array is <code>[1,1,1,1,1,1]</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [0,1,1,1]  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
It is impossible to make all elements equal to <code>1</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 ≤ nums.length ≤ 10⁵</code></li>  
<li><code>0 ≤ nums[i] ≤ 1</code></li>  
</ul>  
</div>  
