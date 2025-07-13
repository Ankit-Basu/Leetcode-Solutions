### <h2><a href="https://leetcode.com/problems/maximum-matching-of-players-with-trainers/">2410. Maximum Matching of Players With Trainers</a></h2>

<h3>Medium</h3>
<hr>

<p>You are given a 0-indexed integer array <code>players</code>, where <code>players[i]</code> represents the ability of the <code>i<sup>th</sup></code> player. You are also given a 0-indexed integer array <code>trainers</code>, where <code>trainers[j]</code> represents the training capacity of the <code>j<sup>th</sup></code> trainer.</p>

<p>A player can be matched with a trainer if the player's ability is less than or equal to the trainer's training capacity. Each player and each trainer can be matched with at most one counterpart.</p>

<p>Return the <strong>maximum</strong> number of matchings that satisfy these conditions.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> players = [4,7,9], trainers = [8,2,5,8]
<strong>Output:</strong> 2

<strong>Explanation:</strong>

* players\[0] (ability 4) can be matched with trainers\[0] (capacity 8).
* players\[1] (ability 7) can be matched with trainers\[3] (capacity 8).
* players\[2] (ability 9) can't be matched with any trainer.
  Hence, the maximum number of matchings is 2.

  </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> players = [1,1,1], trainers = [10]
<strong>Output:</strong> 1

<strong>Explanation:</strong>
Only one trainer is available and can match with any player.
Maximum matching is 1. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= players.length, trainers.length <= 10<sup>5</sup></code></li>
  <li><code>1 <= players[i], trainers[j] <= 10<sup>9</sup></code></li>
</ul>
