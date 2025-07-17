### <h2><a href="https://leetcode.com/problems/maximum-length-of-a-subsequence-with-limited-difference/">XXXX. Maximum Length of a Subsequence With Limited Difference</a></h2>

<h3>Medium</h3>
<hr>

<p>Given an array of integers <code>nums</code> and an integer <code>k</code>, your goal is to find the length of the longest subsequence where the difference between any two elements is divisible by <code>k</code>. Specifically, you can find the length of the longest subsequence such that for some fixed remainder <code>j</code> in the range [0, k), each element <code>num</code> in the subsequence satisfies <code>num % k ≡ j</code> or is linked through a chain of elements with compatible mod values within difference <code>k</code>.</p>

<p>Return the <strong>maximum</strong> length among all such subsequences.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [3, 6, 9, 12], k = 3
<strong>Output:</strong> 4
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [4, 7, 10, 6, 1], k = 3
<strong>Output:</strong> 3
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums.length <= 10<sup>5</sup></code></li>
  <li><code>0 <= nums[i] <= 10<sup>9</sup></code></li>
  <li><code>1 <= k <= 100</code></li>
</ul>

---

> Let me know if you want the actual problem title and number (XXXX) filled in or if this matches a known LeetCode problem.
