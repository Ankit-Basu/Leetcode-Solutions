### <h2><a href="https://leetcode.com/problems/the-earliest-and-latest-rounds-where-players-compete/">1900. The Earliest and Latest Rounds Where Players Compete</a></h2>

<h3>Hard</h3>
<hr>

<p>There is a tournament with <code>n</code> players, numbered from <code>1</code> to <code>n</code>, standing in a row. The tournament consists of multiple rounds:</p>

<ul>
  <li>In each round, the <code>i<sup>th</sup></code> player from the front competes against the <code>i<sup>th</sup></code> player from the end.</li>
  <li>If the number of players is odd, the middle player automatically advances to the next round.</li>
  <li>Winners are re-sorted in ascending order of their original player numbers for the next round.</li>
</ul>

<p>You are given integers <code>n</code>, <code>firstPlayer</code>, and <code>secondPlayer</code> representing two players. These two are the best and will win every match unless they face each other. Other match outcomes can be chosen freely.</p>

<p>Return an array of two integers: the <strong>earliest</strong> and <strong>latest</strong> possible round numbers when <code>firstPlayer</code> and <code>secondPlayer</code> will compete.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> n = 11, firstPlayer = 2, secondPlayer = 4
<strong>Output:</strong> [3,4]

<strong>Explanation:</strong>
Earliest case:
Round 1 → players: \[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Round 2 → winners: \[2, 3, 4, 5, 6, 11]
Round 3 → \[2, 3, 4] → 2 and 4 meet.

Latest case:
Round 1 → \[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Round 2 → \[1, 2, 3, 4, 5, 6]
Round 3 → \[1, 2, 4]
Round 4 → 2 and 4 meet. </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> n = 5, firstPlayer = 1, secondPlayer = 5
<strong>Output:</strong> [1,1]

<strong>Explanation:</strong>
They meet in the first round and cannot meet in any later round. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>2 <= n <= 28</code></li>
  <li><code>1 <= firstPlayer < secondPlayer <= n</code></li>
</ul>
