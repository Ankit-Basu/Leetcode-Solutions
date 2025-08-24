<h2><a href="https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/">1493. Longest Subarray of 1's After Deleting One Element</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given a binary array <code>nums</code>, you should delete <strong>one element</strong> from it.</p>

<p>Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,0,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,1,1,1,0,1,1,0,1]
<strong>Output:</strong> 5
<strong>Explanation:</strong> After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> You must delete one element.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 10<sup>5</sup></code></li>
  <li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div>
