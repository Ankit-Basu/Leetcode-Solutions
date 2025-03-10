<h2><a href="https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/">1475. Final Prices With a Special Discount in a Shop</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of the <code>i<sup>th</sup></code> item in a shop.</p>

<p>There is a special discount for items in the shop. If you buy the <code>i<sup>th</sup></code> item, then you will receive a discount equivalent to <code>prices[j]</code> where <code>j</code> is the minimum index such that <code>j &gt; i</code> and <code>prices[j] &lt;= prices[i]</code>. Otherwise, you will not receive any discount at all.</p>

<p>Return an integer array <code>answer</code> where <code>answer[i]</code> is the final price you will pay for the <code>i<sup>th</sup></code> item of the shop, considering the special discount.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> prices = [8,4,6,2,3]
<strong>Output:</strong> [4,2,4,2,3]
<strong>Explanation:</strong> 
For item 0 with <code>prices[0] = 8</code>, you will receive a discount equivalent to <code>prices[1] = 4</code>, so the final price is <code>8 - 4 = 4</code>.
For item 1 with <code>prices[1] = 4</code>, you will receive a discount equivalent to <code>prices[3] = 2</code>, so the final price is <code>4 - 2 = 2</code>.
For item 2 with <code>prices[2] = 6</code>, you will receive a discount equivalent to <code>prices[3] = 2</code>, so the final price is <code>6 - 2 = 4</code>.
For items 3 and 4, no discounts apply.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> prices = [1,2,3,4,5]
<strong>Output:</strong> [1,2,3,4,5]
<strong>Explanation:</strong> No discounts apply for any item.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> prices = [10,1,1,6]
<strong>Output:</strong> [9,0,1,6]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
  <li><code>1 &lt;= prices.length &lt;= 500</code></li>
  <li><code>1 &lt;= prices[i] &lt;= 1000</code></li>
</ul>
</div>
