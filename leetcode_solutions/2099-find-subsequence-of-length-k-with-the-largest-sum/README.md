### <h2><a href="https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/">2099. Find Subsequence of Length K With the Largest Sum</a></h2>
<h3>Easy</h3>
<hr>

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>. You want to find a subsequence of <code>nums</code> of length <code>k</code> that has the largest sum.</p>

<p>Return <strong>any</strong> such subsequence as an integer array of length <code>k</code>.</p>

<p>A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [2,1,3,3], k = 2
<strong>Output:</strong> [3,3]
<strong>Explanation:</strong> The subsequence with the largest sum is [3,3] with total = 6.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [-1,-2,3,4], k = 3
<strong>Output:</strong> [-1,3,4]
<strong>Explanation:</strong> One valid subsequence with the largest sum 6 is [-1,3,4].
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [3,4,3,3], k = 2
<strong>Output:</strong> [3,4]
<strong>Explanation:</strong> Possible answers: [4,3] or [3,4], both have sum = 7.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums.length <= 1000</code></li>
  <li><code>-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup></code></li>
  <li><code>1 <= k <= nums.length</code></li>
</ul>
