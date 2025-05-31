### <h2><a href="https://leetcode.com/problems/snakes-and-ladders/">909. Snakes and Ladders</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an <code>n x n</code> integer matrix <code>board</code> representing a <strong>Snakes and Ladders</strong> game. The cells are labeled from <code>1</code> to <code>n²</code> in a <strong>Boustrophedon style</strong> (i.e., left to right, then right to left on the next row, and so on), starting from the bottom-left cell (<code>board[n - 1][0]</code>).</p>

<p>You start on square <code>1</code>. On each move:</p>
<ul>
  <li>Roll a 6-sided die and move from square <code>curr</code> to any square labeled in the range <code>[curr + 1, min(curr + 6, n²)]</code>.</li>
  <li>If the destination square has a ladder or snake (i.e., <code>board[r][c] != -1</code>), move to the destination of that snake or ladder.</li>
  <li>You must only take a snake or ladder once per move. Do not chain multiple ladders or snakes from a single die roll.</li>
</ul>

<p>Return the <strong>minimum number of moves</strong> to reach square <code>n²</code>. If it's not possible to reach it, return <code>-1</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> board = [
  [-1, -1, -1, -1, -1, -1],
  [-1, -1, -1, -1, -1, -1],
  [-1, -1, -1, -1, -1, -1],
  [-1, 35, -1, -1, 13, -1],
  [-1, -1, -1, -1, -1, -1],
  [-1, 15, -1, -1, -1, -1]
]
<strong>Output:</strong> 4

<strong>Explanation:</strong> 
- Move 1: Square 1 → 2 → ladder to 15
- Move 2: 15 → 16 → 17 → snake to 13
- Move 3: 13 → 14 → ladder to 35
- Move 4: 35 → 36 (final square)
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> board = [
  [-1, -1],
  [-1, 3]
]
<strong>Output:</strong> 1

<strong>Explanation:</strong> 
- Move 1: Square 1 → 2 → ladder to 3 (goal reached)
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == board.length == board[i].length</code></li>
  <li><code>2 <= n <= 20</code></li>
  <li><code>board[i][j] == -1</code> or <code>1 <= board[i][j] <= n²</code></li>
  <li>The squares labeled 1 and n² are not starting points for any snake or ladder.</li>
</ul>
</div>
