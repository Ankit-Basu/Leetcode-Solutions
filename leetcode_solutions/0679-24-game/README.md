<h2><a href="https://leetcode.com/problems/24-game/">679. 24 Game</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You are given an integer array <code>cards</code> of length 4. You have four cards, each containing a number in the range <code>[1, 9]</code>. You should arrange the numbers on these cards in a mathematical expression using the operators <code>['+', '-', '*', '/']</code> and the parentheses <code>'('</code> and <code>')'</code> to get the value <code>24</code>.</p>

<p>You are restricted with the following rules:</p>
<ul>
  <li>The division operator <code>'/'</code> represents real division, not integer division.</li>
  <li>Every operation must be done between two numbers. Unary operators are not allowed.</li>
  <li>You cannot concatenate numbers together (e.g., "12" from "1" and "2").</li>
</ul>

<p>Return <code>true</code> if you can get such expression that evaluates to <code>24</code>, and <code>false</code> otherwise.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> cards = [4,1,8,7]
<strong>Output:</strong> true
<strong>Explanation:</strong> (8 - 4) * (7 - 1) = 24
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> cards = [1,2,1,2]
<strong>Output:</strong> false
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>cards.length == 4</code></li>
  <li><code>1 &le; cards[i] &le; 9</code></li>
</ul>
</div>
