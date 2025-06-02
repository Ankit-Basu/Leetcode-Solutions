### <h2><a href="https://leetcode.com/problems/candy/">135. Candy</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>There are <code>n</code> children standing in a line. Each child is assigned a rating value given in the integer array <code>ratings</code>.</p>

<p>You are giving candies to these children subject to the following requirements:</p>
<ul>
  <li>Each child must have at least one candy.</li>
  <li>Children with a higher rating get more candies than their neighbors.</li>
</ul>

<p>Return the minimum number of candies you need to distribute to meet these requirements.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> ratings = [1,0,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can allocate candies as follows: [2,1,2].
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> ratings = [1,2,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> You can allocate candies as follows: [1,2,1].
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == ratings.length</code></li>
  <li><code>1 <= n <= 2 * 10<sup>4</sup></code></li>
  <li><code>0 <= ratings[i] <= 2 * 10<sup>4</sup></code></li>
</ul>
</div>
