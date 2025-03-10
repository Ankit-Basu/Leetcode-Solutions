### <h2><a href="https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/">873. Length of Longest Fibonacci Subsequence</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>A sequence <code>x₁, x₂, ..., xₙ</code> is Fibonacci-like if:</p>  
<ul>  
<li><code>n ≥ 3</code></li>  
<li><code>xᵢ + xᵢ₊₁ == xᵢ₊₂</code> for all <code>i + 2 ≤ n</code></li>  
</ul>  

<p>Given a strictly increasing array <code>arr</code> of positive integers forming a sequence, return the length of the longest Fibonacci-like subsequence of <code>arr</code>. If one does not exist, return <code>0</code>.</p>  

<p>A subsequence is derived from another sequence <code>arr</code> by deleting any number of elements (including none) from <code>arr</code>, without changing the order of the remaining elements. For example, <code>[3, 5, 8]</code> is a subsequence of <code>[3, 4, 5, 6, 7, 8]</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [1,2,3,4,5,6,7,8]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong> The longest subsequence that is Fibonacci-like: [1,2,3,5,8].  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [1,3,7,11,12,14,18]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> The longest subsequence that is Fibonacci-like: [1,11,12], [3,11,14], or [7,11,18].  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 ≤ arr.length ≤ 1000</code></li>  
<li><code>1 ≤ arr[i] < arr[i+1] ≤ 10⁹</code></li>  
</ul>  
</div>  
