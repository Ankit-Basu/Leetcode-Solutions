### <h2><a href="https://leetcode.com/problems/put-marbles-in-bags/">2551. Put Marbles in Bags</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You have <code>k</code> bags. You are given a <code>0-indexed</code> integer array <code>weights</code> where <code>weights[i]</code> is the weight of the <code>iᵗʰ</code> marble. You are also given the integer <code>k</code>.</p>  

<p>Divide the marbles into the <code>k</code> bags according to the following rules:</p>  
<ul>  
<li>No bag is empty.</li>  
<li>If the <code>iᵗʰ</code> marble and <code>jᵗʰ</code> marble are in a bag, then all marbles with an index between the <code>iᵗʰ</code> and <code>jᵗʰ</code> indices should also be in that same bag.</li>  
<li>If a bag consists of all the marbles with an index from <code>i</code> to <code>j</code> inclusively, then the cost of the bag is <code>weights[i] + weights[j]</code>.</li>  
</ul>  

<p>The score after distributing the marbles is the sum of the costs of all the <code>k</code> bags.</p>  

<p>Return the difference between the maximum and minimum scores among marble distributions.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> weights = [1,3,5,1], k = 2  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>   
The distribution <code>[1],[3,5,1]</code> results in the minimal score of <code>(1+1) + (3+1) = 6</code>.  
The distribution <code>[1,3],[5,1]</code> results in the maximal score of <code>(1+3) + (5+1) = 10</code>.  
Thus, we return their difference <code>10 - 6 = 4</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> weights = [1, 3], k = 2  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> The only distribution possible is <code>[1],[3]</code>.  
Since both the maximal and minimal score are the same, we return <code>0</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ k ≤ weights.length ≤ 10⁵</code></li>  
<li><code>1 ≤ weights[i] ≤ 10⁹</code></li>  
</ul>  
</div>  
