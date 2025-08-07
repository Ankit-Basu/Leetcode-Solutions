<h2><a href="https://leetcode.com/problems/find-the-maximum-number-of-fruits-collected/">3363. Find the Maximum Number of Fruits Collected</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>There is a game dungeon comprised of <code>n x n</code> rooms arranged in a grid.</p>

<p>You are given a 2D array <code>fruits</code> of size <code>n x n</code>, where <code>fruits[i][j]</code> represents the number of fruits in the room <code>(i, j)</code>. Three children will play in the game dungeon, with initial positions at the corner rooms <code>(0, 0)</code>, <code>(0, n - 1)</code>, and <code>(n - 1, 0)</code>.</p>

<p>The children will make exactly <code>n - 1</code> moves according to the following rules to reach the room <code>(n - 1, n - 1)</code>:</p>
<ul>
  <li>The child starting from <code>(0, 0)</code> can move to <code>(i + 1, j + 1)</code>, <code>(i + 1, j)</code>, or <code>(i, j + 1)</code> if the target room exists.</li>
  <li>The child starting from <code>(0, n - 1)</code> can move to <code>(i + 1, j - 1)</code>, <code>(i + 1, j)</code>, or <code>(i + 1, j + 1)</code> if the target room exists.</li>
  <li>The child starting from <code>(n - 1, 0)</code> can move to <code>(i - 1, j + 1)</code>, <code>(i, j + 1)</code>, or <code>(i + 1, j + 1)</code> if the target room exists.</li>
</ul>

<p>When a child enters a room, they will collect all the fruits there. If two or more children enter the same room, only one of them will collect the fruits, and the room will be emptied after they leave.</p>

<p>Return the <strong>maximum number of fruits</strong> the children can collect from the dungeon.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> fruits = [[1,2,3,4],[5,6,8,7],[9,10,11,12],[13,14,15,16]]
<strong>Output:</strong> 100
<strong>Explanation:</strong>
Child 1 (green): (0,0) → (1,1) → (2,2) → (3,3)
Child 2 (red): (0,3) → (1,2) → (2,3) → (3,3)
Child 3 (blue): (3,0) → (3,1) → (3,2) → (3,3)
Fruits collected: 1 + 6 + 11 + 16 + 4 + 8 + 12 + 13 + 14 + 15 = 100
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> fruits = [[1,1],[1,1]]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
Child 1: (0,0) → (1,1)
Child 2: (0,1) → (1,1)
Child 3: (1,0) → (1,1)
Each child collects 1 fruit (room (1,1) is collected only once).
Total: 1 + 1 + 1 + 1 = 4
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 &le; n == fruits.length == fruits[i].length &le; 1000</code></li>
  <li><code>0 &le; fruits[i][j] &le; 1000</code></li>
</ul>
</div>
