<h2><a href="https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/">1574. Shortest Subarray to be Removed to Make Array Sorted</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given an integer array <code>arr</code>, remove a subarray (can be empty) from <code>arr</code> such that the remaining elements in <code>arr</code> are non-decreasing.</p>  

<p>Return the length of the shortest subarray to remove.</p>  

<p>A subarray is a contiguous subsequence of the array.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> arr = [1,2,3,10,4,2,3,5]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong> The shortest subarray we can remove is [10,4,2] of length 3.  
The remaining elements after that will be [1,2,3,3,5] which are sorted.  
Another correct solution is to remove the subarray [3,10,4].  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> arr = [5,4,3,2,1]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> Since the array is strictly decreasing, we can only keep a single element.  
Therefore we need to remove a subarray of length 4, either [5,4,3,2] or [4,3,2,1].  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> arr = [1,2,3]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> The array is already non-decreasing. We do not need to remove any elements.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= arr.length <= 10<sup>5</sup></code></li>  
<li><code>0 <= arr[i] <= 10<sup>9</sup></code></li>  
</ul>  
</div>  