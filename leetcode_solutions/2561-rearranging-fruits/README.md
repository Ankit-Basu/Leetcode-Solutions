<h2><a href="https://leetcode.com/problems/rearranging-fruits/">2561. Rearranging Fruits</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You have two fruit baskets containing <code>n</code> fruits each. You are given two 0-indexed integer arrays <code>basket1</code> and <code>basket2</code> representing the cost of fruits in each basket. You want to make both baskets equal. To do so, you can use the following operation as many times as you want:</p>

<ul>
  <li>Choose two indices <code>i</code> and <code>j</code>, and swap the <code>i<sup>th</sup></code> fruit of <code>basket1</code> with the <code>j<sup>th</sup></code> fruit of <code>basket2</code>.</li>
</ul>

<p>The cost of the swap is <code>min(basket1[i], basket2[j])</code>.</p>
<p>Two baskets are considered equal if sorting them according to the fruit cost makes them exactly the same.</p>
<p>Return the <strong>minimum cost</strong> to make both the baskets equal or <code>-1</code> if it is impossible.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> basket1 = [4,2,2,2], basket2 = [1,4,1,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Swap index 1 of basket1 with index 0 of basket2 (cost = min(2,1) = 1).
Now basket1 = [4,1,2,2] and basket2 = [2,4,1,2]. After sorting both, they are equal.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> basket1 = [2,3,4,1], basket2 = [3,2,5,1]
<strong>Output:</strong> -1
<strong>Explanation:</strong> It is impossible to make both baskets equal.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>basket1.length == basket2.length</code></li>
  <li><code>1 &le; basket1.length &le; 10<sup>5</sup></code></li>
  <li><code>1 &le; basket1[i], basket2[i] &le; 10<sup>9</sup></code></li>
</ul>
</div>
