### <h2><a href="https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/">2657. Find the Prefix Common Array of Two Arrays</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given two 0-indexed integer permutations <code>A</code> and <code>B</code> of length <code>n</code>.</p>  

<p>A prefix common array of <code>A</code> and <code>B</code> is an array <code>C</code> such that <code>C[i]</code> is equal to the count of numbers that are present at or before the index <code>i</code> in both <code>A</code> and <code>B</code>.</p>  

<p>Return the prefix common array of <code>A</code> and <code>B</code>.</p>  

<p>A sequence of <code>n</code> integers is called a permutation if it contains all integers from <code>1</code> to <code>n</code> exactly once.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> A = [1,3,2,4], B = [3,1,2,4]  
<strong>Output:</strong> [0,2,3,4]  
<strong>Explanation:</strong>  
At <code>i = 0</code>: no number is common, so <code>C[0] = 0</code>.  
At <code>i = 1</code>: 1 and 3 are common in <code>A</code> and <code>B</code>, so <code>C[1] = 2</code>.  
At <code>i = 2</code>: 1, 2, and 3 are common in <code>A</code> and <code>B</code>, so <code>C[2] = 3</code>.  
At <code>i = 3</code>: 1, 2, 3, and 4 are common in <code>A</code> and <code>B</code>, so <code>C[3] = 4</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> A = [2,3,1], B = [3,1,2]  
<strong>Output:</strong> [0,1,3]  
<strong>Explanation:</strong>  
At <code>i = 0</code>: no number is common, so <code>C[0] = 0</code>.  
At <code>i = 1</code>: only 3 is common in <code>A</code> and <code>B</code>, so <code>C[1] = 1</code>.  
At <code>i = 2</code>: 1, 2, and 3 are common in <code>A</code> and <code>B</code>, so <code>C[2] = 3</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= A.length == B.length == n <= 50</code></li>  
<li><code>1 <= A[i], B[i] <= n</code></li>  
<li>It is guaranteed that <code>A</code> and <code>B</code> are both a permutation of <code>n</code> integers.</li>  
</ul>  
</div>  
