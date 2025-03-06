### <h2><a href="https://leetcode.com/problems/find-missing-and-repeated-values/">2965. Find Missing and Repeated Values</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> 2D integer matrix <code>grid</code> of size <code>n × n</code> with values in the range <code>[1, n²]</code>. Each integer appears exactly once except <code>a</code>, which appears twice, and <code>b</code>, which is missing. The task is to find the repeating and missing numbers <code>a</code> and <code>b</code>.</p>  

<p>Return a <code>0-indexed</code> integer array <code>ans</code> of size <code>2</code> where <code>ans[0]</code> equals <code>a</code> and <code>ans[1]</code> equals <code>b</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[1,3],[2,2]]  
<strong>Output:</strong> [2,4]  
<strong>Explanation:</strong> Number 2 is repeated and number 4 is missing, so the answer is [2,4].  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> grid = [[9,1,7],[8,9,2],[3,4,6]]  
<strong>Output:</strong> [9,5]  
<strong>Explanation:</strong> Number 9 is repeated and number 5 is missing, so the answer is [9,5].  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>2 ≤ n == grid.length == grid[i].length ≤ 50</code></li>  
<li><code>1 ≤ grid[i][j] ≤ n²</code></li>  
<li>There exists exactly one integer <code>x</code> that appears twice and exactly one integer <code>y</code> that is missing.</li>  
</ul>  
</div>  
