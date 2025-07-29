<h2><a href="https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/">2411. Smallest Subarrays With Maximum Bitwise OR</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given a 0-indexed array <code>nums</code> of length <code>n</code>, consisting of non-negative integers. For each index <code>i</code> from <code>0</code> to <code>n - 1</code>, you must determine the size of the minimum sized non-empty subarray of <code>nums</code> starting at <code>i</code> (inclusive) that has the maximum possible bitwise <strong>OR</strong>.</p>

<p>In other words, let <code>B<sub>i,j</sub></code> be the bitwise OR of the subarray <code>nums[i...j]</code>. You need to find the smallest subarray starting at <code>i</code>, such that the bitwise OR of this subarray is equal to <code>max(B<sub>i,k</sub>)</code> where <code>i &le; k &le; n - 1</code>.</p>

<p>Return an integer array <code>answer</code> of size <code>n</code> where <code>answer[i]</code> is the length of the minimum sized subarray starting at <code>i</code> with the maximum bitwise OR.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,0,2,1,3]
<strong>Output:</strong> [3,3,2,2,1]
<strong>Explanation:</strong>
The maximum possible bitwise OR starting at any index is 3. 
- Starting at index 0, the shortest subarray that yields it is [1,0,2].
- Starting at index 1, the shortest subarray that yields the maximum bitwise OR is [0,2,1].
- Starting at index 2, the shortest subarray that yields the maximum bitwise OR is [2,1].
- Starting at index 3, the shortest subarray that yields the maximum bitwise OR is [1,3].
- Starting at index 4, the shortest subarray that yields the maximum bitwise OR is [3].
Therefore, we return [3,3,2,2,1].
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> [2,1]
<strong>Explanation:</strong>
- Starting at index 0, the shortest subarray that yields the maximum bitwise OR is of length 2.
- Starting at index 1, the shortest subarray that yields the maximum bitwise OR is of length 1.
Therefore, we return [2,1].
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>1 &le; n &le; 10<sup>5</sup></code></li>
  <li><code>0 &le; nums[i] &le; 10<sup>9</sup></code></li>
</ul>
</div>
