### <h2><a href="https://leetcode.com/problems/find-minimum-time-to-reach-last-room-i/">3341. Find Minimum Time to Reach Last Room I</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>There is a dungeon with <code>n x m</code> rooms arranged as a grid.</p>  
<p>You are given a 2D array <code>moveTime</code> of size <code>n x m</code>, where <code>moveTime[i][j]</code> represents the minimum time in seconds when you can start moving to that room. You start from the room <code>(0, 0)</code> at time <code>t = 0</code> and can move to an adjacent room. Moving between adjacent rooms takes exactly one second.</p>  
<p>Return the minimum time to reach the room <code>(n - 1, m - 1)</code>.</p>  

<p>Two rooms are adjacent if they share a common wall, either horizontally or vertically.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> moveTime = [[0,4],[4,4]]
<strong>Output:</strong> 6
<strong>Explanation:</strong>
At time t = 0, you are in (0,0).
At t = 4, move to (1,0). Arrive at t = 5.
At t = 5, move to (1,1). Arrive at t = 6.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> moveTime = [[0,0,0],[0,0,0]]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
Path: (0,0) → (1,0) → (1,1) → (1,2)
Each move takes 1 second. Total = 3 seconds.
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> moveTime = [[0,1],[1,2]]
<strong>Output:</strong> 3
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>2 &le; n == moveTime.length &le; 50</code></li>  
  <li><code>2 &le; m == moveTime[i].length &le; 50</code></li>  
  <li><code>0 &le; moveTime[i][j] &le; 10<sup>9</sup></code></li>  
</ul>  
</div>
