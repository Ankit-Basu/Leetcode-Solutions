<h2><a href="https://leetcode.com/problems/fruits-into-baskets-ii/">3477. Fruits Into Baskets II</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given two arrays of integers, <code>fruits</code> and <code>baskets</code>, each of length <code>n</code>, where <code>fruits[i]</code> represents the quantity of the <code>i<sup>th</sup></code> type of fruit, and <code>baskets[j]</code> represents the capacity of the <code>j<sup>th</sup></code> basket.</p>

<p>From left to right, place the fruits according to these rules:</p>
<ul>
  <li>Each fruit type must be placed in the leftmost available basket with a capacity greater than or equal to the quantity of that fruit type.</li>
  <li>Each basket can hold only one type of fruit.</li>
  <li>If a fruit type cannot be placed in any basket, it remains unplaced.</li>
</ul>

<p>Return the number of fruit types that remain unplaced after all possible allocations are made.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> fruits = [4,2,5], baskets = [3,5,4]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
fruits[0] = 4 is placed in baskets[1] = 5.
fruits[1] = 2 is placed in baskets[0] = 3.
fruits[2] = 5 cannot be placed in baskets[2] = 4.
Since one fruit type remains unplaced, we return 1.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> fruits = [3,6,1], baskets = [6,4,7]
<strong>Output:</strong> 0
<strong>Explanation:</strong> 
fruits[0] = 3 is placed in baskets[0] = 6.
fruits[1] = 6 cannot be placed in baskets[1] = 4 (insufficient capacity) but can be placed in the next available basket, baskets[2] = 7.
fruits[2] = 1 is placed in baskets[1] = 4.
Since all fruits are successfully placed, we return 0.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == fruits.length == baskets.length</code></li>
  <li><code>1 &le; n &le; 100</code></li>
  <li><code>1 &le; fruits[i], baskets[i] &le; 1000</code></li>
</ul>
</div>
