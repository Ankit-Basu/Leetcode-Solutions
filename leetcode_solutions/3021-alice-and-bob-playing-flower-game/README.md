<h2><a href="https://leetcode.com/problems/alice-and-bob-playing-flower-game/">3021. Alice and Bob Playing Flower Game</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Alice and Bob are playing a turn-based game on a field with two lanes of flowers between them. There are <code>x</code> flowers in the first lane and <code>y</code> flowers in the second lane.</p>

<p>The game proceeds as follows:</p>
<ul>
  <li>Alice takes the first turn.</li>
  <li>On each turn, a player must choose one of the lanes and pick <strong>one</strong> flower from that lane.</li>
  <li>At the end of a turn, if there are no flowers left at all, the current player captures their opponent and wins the game.</li>
</ul>

<p>Given two integers <code>n</code> and <code>m</code>, compute the number of possible pairs <code>(x, y)</code> such that:</p>
<ul>
  <li>Alice wins the game according to the rules above.</li>
  <li><code>1 \le x \le n</code> for the first lane.</li>
  <li><code>1 \le y \le m</code> for the second lane.</li>
</ul>

<p>Return the number of such pairs <code>(x, y)</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3, m = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> The following pairs satisfy the conditions: (1,2), (3,2), (2,1).
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 1, m = 1
<strong>Output:</strong> 0
<strong>Explanation:</strong> No pairs satisfy the conditions.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 \le n, m \le 10^5</code></li>
</ul>
</div>
