### <h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/">3396. Minimum Number of Operations to Make Elements in Array Distinct</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code>. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:</p>  

<ul>  
<li>Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.</li>  
</ul>  

<p>Note that an empty array is considered to have distinct elements.</p>  
<p>Return the <strong>minimum number of operations</strong> needed to make the elements in the array distinct.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,2,3,4,2,3,3,5,7]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
- Operation 1: Remove first 3 elements → [4, 2, 3, 3, 5, 7]  
- Operation 2: Remove next 3 elements → [3, 5, 7]  
All elements are now distinct.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [4,5,6,4,4]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
- Operation 1: Remove first 3 elements → [4, 4]  
- Operation 2: Remove all remaining elements → []  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [6,7,8,9]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong>  
All elements are already distinct.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 100</code></li>  
<li><code>1 <= nums[i] <= 100</code></li>  
</ul>  
</div>
