### <h2><a href="https://leetcode.com/problems/best-sightseeing-pair/">1014. Best Sightseeing Pair</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array `values` where `values[i]` represents the value of the ith sightseeing spot. Two sightseeing spots `i` and `j` have a distance `j - i` between them.</p>  

<p>The score of a pair (`i < j`) of sightseeing spots is `values[i] + values[j] + i - j`: the sum of the values of the sightseeing spots, minus the distance between them.</p>  

<p>Return the maximum score of a pair of sightseeing spots.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> values = [8,1,5,2,6]  
<strong>Output:</strong> 11  
<strong>Explanation:</strong> i = 0, j = 2, values[i] + values[j] + i - j = 8 + 5 + 0 - 2 = 11  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> values = [1,2]  
<strong>Output:</strong> 2  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>2 <= values.length <= 5 * 10<sup>4</sup></code></li>  
<li><code>1 <= values[i] <= 1000</code></li>  
</ul>  
</div>  