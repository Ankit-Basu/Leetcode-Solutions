### <h2><a href="https://leetcode.com/problems/count-good-triplets/">1534. Count Good Triplets</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given an array of integers <code>arr</code>, and three integers <code>a</code>, <code>b</code>, and <code>c</code>, your task is to find the number of good triplets.</p>  

<p>A triplet <code>(arr[i], arr[j], arr[k])</code> is considered good if the following conditions are satisfied:</p>  
<ul>  
<li><code>0 <= i < j < k < arr.length</code></li>  
<li><code>|arr[i] - arr[j]| <= a</code></li>  
<li><code>|arr[j] - arr[k]| <= b</code></li>  
<li><code>|arr[i] - arr[k]| <= c</code></li>  
</ul>  
<p>Where <code>|x|</code> denotes the absolute value of <code>x</code>.</p>  

<p><strong>Return</strong> the number of good triplets.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> The good triplets are: (3,0,1), (3,0,1), (3,1,1), (0,1,1).  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> arr = [1,1,2,2,3], a = 0, b = 0, c = 1  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> No triplet satisfies all three conditions.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 <= arr.length <= 100</code></li>  
<li><code>0 <= arr[i] <= 1000</code></li>  
<li><code>0 <= a, b, c <= 1000</code></li>  
</ul>  
</div>
