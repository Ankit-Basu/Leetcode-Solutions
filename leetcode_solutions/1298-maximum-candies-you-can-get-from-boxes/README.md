### <h2><a href="https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes/">1298. Maximum Candies You Can Get from Boxes</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You have <code>n</code> boxes labeled from <code>0</code> to <code>n - 1</code>. You are given four arrays:</p>
<ul>
  <li><code>status[i]</code> is <code>1</code> if the <code>i<sup>th</sup></code> box is open and <code>0</code> if the box is closed.</li>
  <li><code>candies[i]</code> is the number of candies in the <code>i<sup>th</sup></code> box.</li>
  <li><code>keys[i]</code> is a list of the labels of the boxes you can open after opening the <code>i<sup>th</sup></code> box.</li>
  <li><code>containedBoxes[i]</code> is a list of the boxes you find inside the <code>i<sup>th</sup></code> box.</li>
</ul>

<p>You are also given an integer array <code>initialBoxes</code> containing the labels of the boxes you initially have.</p>

<p>You can take all the candies in any open box, use the keys in it to open new boxes, and use the boxes you find in it as well.</p>

<p>Return the <strong>maximum number of candies</strong> you can collect following the above rules.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> 
status = [1,0,1,0], 
candies = [7,5,4,100], 
keys = [[],[],[1],[]], 
containedBoxes = [[1,2],[3],[],[]], 
initialBoxes = [0]
<strong>Output:</strong> 16
<strong>Explanation:</strong> 
Start with box 0 → get 7 candies and find boxes 1 and 2.
Open box 2 → get 4 candies and a key to box 1.
Use key to open box 1 → get 5 candies and find box 3.
Cannot open box 3 (no key).
Total = 7 + 4 + 5 = 16
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> 
status = [1,0,0,0,0,0], 
candies = [1,1,1,1,1,1], 
keys = [[1,2,3,4,5],[],[],[],[],[]], 
containedBoxes = [[1,2,3,4,5],[],[],[],[],[]], 
initialBoxes = [0]
<strong>Output:</strong> 6
<strong>Explanation:</strong> 
Box 0 contains all other boxes and their keys.
You can open all boxes and collect 1 candy from each.
Total = 6
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == status.length == candies.length == keys.length == containedBoxes.length</code></li>
  <li><code>1 <= n <= 1000</code></li>
  <li><code>status[i]</code> is either <code>0</code> or <code>1</code></li>
  <li><code>1 <= candies[i] <= 1000</code></li>
  <li><code>0 <= keys[i].length, containedBoxes[i].length <= n</code></li>
  <li>All values in <code>keys[i]</code> and <code>containedBoxes[i]</code> are unique</li>
  <li>Each box is contained in at most one other box</li>
  <li><code>0 <= initialBoxes.length <= n</code></li>
</ul>
</div>
