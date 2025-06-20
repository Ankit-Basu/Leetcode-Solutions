### <h2><a href="https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/">3443. Maximum Manhattan Distance After K Changes</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> consisting of the characters <code>'N'</code>, <code>'S'</code>, <code>'E'</code>, and <code>'W'</code>, where <code>s[i]</code> indicates movements in an infinite 2D grid:</p>

<ul>
  <li><code>'N'</code>: Move north by 1 unit.</li>
  <li><code>'S'</code>: Move south by 1 unit.</li>
  <li><code>'E'</code>: Move east by 1 unit.</li>
  <li><code>'W'</code>: Move west by 1 unit.</li>
</ul>

<p>Initially, you are at the origin <code>(0, 0)</code>. You can change at most <code>k</code> characters in <code>s</code> to any of the four directions.</p>

<p>Return the <strong>maximum Manhattan distance</strong> from the origin that can be achieved at any point while performing the movements in order.</p>

<p><b>Note:</b> The Manhattan Distance between two points <code>(xi, yi)</code> and <code>(xj, yj)</code> is <code>|xi - xj| + |yi - yj|</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "NWSE", k = 1  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
Change s[2] from 'S' to 'N' → "NWNE"

Movements:
- (0,1) → (x=0, y=1)
- (-1,1) → (x=-1, y=1)
- (-1,2) → (x=-1, y=2)
- (0,2) → (x=0, y=2)

Manhattan distances: 1 → 2 → 3 → 2. Max = 3.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "NSWWEW", k = 3  
<strong>Output:</strong> 6  
<strong>Explanation:</strong>  
Change s[1]='S' to 'N', s[4]='E' to 'W' → "NNWWWW"

Max distance achieved: 6.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s.length <= 10⁵</code></li>
  <li><code>0 <= k <= s.length</code></li>
  <li><code>s</code> consists of only <code>'N'</code>, <code>'S'</code>, <code>'E'</code>, and <code>'W'</code>.</li>
</ul>
</div>
