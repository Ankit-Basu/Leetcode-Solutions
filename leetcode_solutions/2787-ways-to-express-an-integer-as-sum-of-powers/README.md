<h2><a href="https://leetcode.com/problems/ways-to-express-an-integer-as-sum-of-powers/">2787. Ways to Express an Integer as Sum of Powers</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given two positive integers <code>n</code> and <code>x</code>.</p>

<p>Return the number of ways <code>n</code> can be expressed as the sum of the <code>x<sup>th</sup></code> power of unique positive integers, in other words, the number of sets of unique integers <code>[n<sub>1</sub>, n<sub>2</sub>, ..., n<sub>k</sub>]</code> where <code>n = n<sub>1</sub><sup>x</sup> + n<sub>2</sub><sup>x</sup> + ... + n<sub>k</sub><sup>x</sup></code>.</p>

<p>Since the result can be very large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 10, x = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> We can express n as the following: n = 3<sup>2</sup> + 1<sup>2</sup> = 10.
It can be shown that it is the only way to express 10 as the sum of the 2nd power of unique integers.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 4, x = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> We can express n in the following ways:
- n = 4<sup>1</sup> = 4
- n = 3<sup>1</sup> + 1<sup>1</sup> = 4
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; n &le; 300</code></li>
  <li><code>1 &le; x &le; 5</code></li>
</ul>
</div>
