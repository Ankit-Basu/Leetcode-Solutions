### <h2><a href="https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/">1524. Number of Sub-arrays With Odd Sum</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given an array of integers <code>arr</code>, return the number of subarrays with an odd sum.</p>  

<p>Since the answer can be very large, return it modulo <code>10^9 + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [1,3,5]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
All subarrays are [[1],[1,3],[1,3,5],[3],[3,5],[5]]  
All sub-arrays sums are [1,4,9,3,8,5].  
Odd sums are [1,9,3,5], so the answer is 4.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [2,4,6]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong>  
All subarrays are [[2],[2,4],[2,4,6],[4],[4,6],[6]]  
All sub-arrays sums are [2,6,12,4,10,6].  
All sub-arrays have even sum, so the answer is 0.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [1,2,3,4,5,6,7]  
<strong>Output:</strong> 16  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= arr.length <= 10^5</code></li>  
<li><code>1 <= arr[i] <= 100</code></li>  
</ul>  
</div>  
