### <h2><a href="https://leetcode.com/problems/sum-of-all-subset-xor-totals/">1863. Sum of All Subset XOR Totals</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>The <strong>XOR total</strong> of an array is defined as the bitwise <code>XOR</code> of all its elements, or <code>0</code> if the array is empty.</p>  

<p>Given an integer array <code>nums</code>, return the <strong>sum of all XOR totals</strong> for every <strong>subset</strong> of <code>nums</code>.</p>  

<p>Note: Subsets with the same elements but in different order are considered the same and should only be counted once.</p>  

<p>An array <code>a</code> is a subset of an array <code>b</code> if <code>a</code> can be obtained from <code>b</code> by deleting some (possibly zero) elements of <code>b</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,3]  
<strong>Output:</strong> 6  
<strong>Explanation:</strong> The 4 subsets of [1,3] are:  
- [] → XOR = 0  
- [1] → XOR = 1  
- [3] → XOR = 3  
- [1,3] → XOR = 1 ^ 3 = 2  
Sum = 0 + 1 + 3 + 2 = 6  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [5,1,6]  
<strong>Output:</strong> 28  
<strong>Explanation:</strong> The 8 subsets are:  
- [] → 0  
- [5] → 5  
- [1] → 1  
- [6] → 6  
- [5,1] → 5 ^ 1 = 4  
- [5,6] → 5 ^ 6 = 3  
- [1,6] → 1 ^ 6 = 7  
- [5,1,6] → 5 ^ 1 ^ 6 = 2  
Sum = 0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [3,4,5,6,7,8]  
<strong>Output:</strong> 480  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 12</code></li>  
<li><code>1 <= nums[i] <= 20</code></li>  
</ul>  
</div>  
