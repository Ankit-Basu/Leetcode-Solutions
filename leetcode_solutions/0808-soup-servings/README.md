<h2><a href="https://leetcode.com/problems/soup-servings/">808. Soup Servings</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You have two soups, <strong>A</strong> and <strong>B</strong>, each starting with <code>n</code> mL. On every turn, one of the following four serving operations is chosen at random, each with probability <code>0.25</code> independent of all previous turns:</p>

<ul>
  <li>Pour 100 mL from soup A and 0 mL from soup B</li>
  <li>Pour 75 mL from soup A and 25 mL from soup B</li>
  <li>Pour 50 mL from soup A and 50 mL from soup B</li>
  <li>Pour 25 mL from soup A and 75 mL from soup B</li>
</ul>

<p><strong>Notes:</strong></p>
<ul>
  <li>There is no operation that pours 0 mL from soup A and 100 mL from soup B.</li>
  <li>The amounts from A and B are poured simultaneously during the turn.</li>
  <li>If an operation asks you to pour more than you have left of a soup, pour all that remains of that soup.</li>
  <li>The process stops immediately after any turn in which one of the soups is used up.</li>
</ul>

<p>Return the probability that soup A is used up before soup B, plus <strong>half</strong> the probability that both soups are used up in the same turn.</p>
<p>Answers within <code>10<sup>-5</sup></code> of the actual answer will be accepted.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 50
<strong>Output:</strong> 0.62500
<strong>Explanation:</strong>
If we perform either of the first two serving operations, soup A will become empty first.
If we perform the third operation, A and B will become empty at the same time.
If we perform the fourth operation, soup B will become empty first.
Total probability = 0.25 × (1 + 1 + 0.5 + 0) = 0.625.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 100
<strong>Output:</strong> 0.71875
<strong>Explanation:</strong>
Detailed probability calculation results in 0.71875.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>0 &le; n &le; 10<sup>9</sup></code></li>
</ul>
</div>
