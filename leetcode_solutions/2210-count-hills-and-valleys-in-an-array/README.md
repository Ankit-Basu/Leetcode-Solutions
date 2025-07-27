<h2><a href="https://leetcode.com/problems/count-hills-and-valleys-in-an-array/">2210. Count Hills and Valleys in an Array</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given a 0-indexed integer array <code>nums</code>. An index <code>i</code> is part of a <strong>hill</strong> in <code>nums</code> if the closest non-equal neighbors of <code>i</code> are smaller than <code>nums[i]</code>. Similarly, an index <code>i</code> is part of a <strong>valley</strong> in <code>nums</code> if the closest non-equal neighbors of <code>i</code> are larger than <code>nums[i]</code>.</p>

<p>Adjacent indices <code>i</code> and <code>j</code> are part of the same hill or valley if <code>nums[i] == nums[j]</code>.</p>

<p>Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index.</p>

<p>Return the <strong>number of hills and valleys</strong> in <code>nums</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,4,1,1,6,5]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
- Index 1: 4 &gt; 2 and 4 &gt; 1 → hill
- Index 2 and 3: 1 &lt; 4 and 1 &lt; 6 → valley
- Index 4: 6 &gt; 1 and 6 &gt; 5 → hill
- Indices 0 and 5 have no non-equal neighbors on one side.
Total = 3 hills/valleys.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [6,6,5,5,4,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> No index has both left and right non-equal neighbors satisfying the hill or valley condition.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>3 &le; nums.length &le; 100</code></li>
  <li><code>1 &le; nums[i] &le; 100</code></li>
</ul>
</div>
