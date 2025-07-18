### <h2><a href="https://leetcode.com/problems/minimum-difference-in-sums-after-removal-of-elements/">2163. Minimum Difference in Sums After Removal of Elements</a></h2>

<h3>Hard</h3>
<hr>

<p>You are given a 0-indexed integer array <code>nums</code> consisting of <code>3 * n</code> elements.</p>

<p>You are allowed to remove any subsequence of elements of size exactly <code>n</code> from <code>nums</code>. The remaining <code>2 * n</code> elements will be divided into two equal parts:</p>

<ul>
  <li>The first <code>n</code> elements will belong to the first part with sum <code>sumfirst</code>.</li>
  <li>The next <code>n</code> elements will belong to the second part with sum <code>sumsecond</code>.</li>
</ul>

<p>The difference in sums of the two parts is denoted as <code>sumfirst - sumsecond</code>.</p>

<p>Return the <strong>minimum possible difference</strong> between the sums of the two parts after the removal of <code>n</code> elements.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [3,1,2]
<strong>Output:</strong> -1

<strong>Explanation:</strong>
Here, nums has 3 elements, so n = 1.
We must remove 1 element:

* Remove 3 → \[1,2] → 1 - 2 = -1
* Remove 1 → \[3,2] → 3 - 2 = 1
* Remove 2 → \[3,1] → 3 - 1 = 2

Minimum difference = -1 </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [7,9,5,8,1,3]
<strong>Output:</strong> 1

<strong>Explanation:</strong>
Here, n = 2. We must remove 2 elements and divide the remaining array into two equal parts of size 2.

* Remove 9 and 1 → \[7,5,8,3] → (7+5) - (8+3) = 12 - 11 = 1
  This is the minimum possible difference.

  </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>nums.length == 3 * n</code></li>
  <li><code>1 <= n <= 10<sup>5</sup></code></li>
  <li><code>1 <= nums[i] <= 10<sup>5</sup></code></li>
</ul>
