### <h2><a href="https://leetcode.com/problems/maximum-candies-allocated-to-k-children/">2226. Maximum Candies Allocated to K Children</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> integer array <code>candies</code>. Each element in the array denotes a pile of candies of size <code>candies[i]</code>. You can divide each pile into any number of sub-piles, but you cannot merge two piles together.</p>  

<p>You are also given an integer <code>k</code>. You should allocate piles of candies to <code>k</code> children such that each child gets the same number of candies. Each child can be allocated candies from only one pile, and some piles of candies may go unused.</p>  

<p>Return the maximum number of candies each child can get.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> candies = [5,8,6], k = 3  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
We can divide <code>candies[1]</code> into 2 piles of size <code>5</code> and <code>3</code>, and <code>candies[2]</code> into 2 piles of size <code>5</code> and <code>1</code>.  
We now have five piles of candies of sizes <code>5, 5, 3, 5, and 1</code>.  
We can allocate the <code>3</code> piles of size <code>5</code> to <code>3</code> children.  
It can be proven that each child cannot receive more than <code>5</code> candies.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> candies = [2,5], k = 11  
<strong>Output:</strong> 0  
<strong>Explanation:</strong>  
There are <code>11</code> children but only <code>7</code> candies in total, so it is impossible to ensure each child receives at least one candy.  
Thus, each child gets no candy, and the answer is <code>0</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ candies.length ≤ 10^5</code></li>  
<li><code>1 ≤ candies[i] ≤ 10^7</code></li>  
<li><code>1 ≤ k ≤ 10^12</code></li>  
</ul>  
</div>  
