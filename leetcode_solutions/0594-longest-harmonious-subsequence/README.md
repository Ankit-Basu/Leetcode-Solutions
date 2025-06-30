### <h2><a href="https://leetcode.com/problems/longest-harmonious-subsequence/">594. Longest Harmonious Subsequence</a></h2>
<h3>Easy</h3>
<hr>

<p>We define a harmonious array as an array where the difference between its maximum value and minimum value is exactly <code>1</code>.</p>

<p>Given an integer array <code>nums</code>, return the length of its longest harmonious subsequence among all its possible subsequences.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [1,3,2,2,5,2,3,7]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The longest harmonious subsequence is [3,2,2,2,3].
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The longest harmonious subsequences are [1,2], [2,3], and [3,4].
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [1,1,1,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> No harmonious subsequence exists.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums.length <= 2 * 10<sup>4</sup></code></li>
  <li><code>-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup></code></li>
</ul>
