<h2><a href="https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/">2044. Count Number of Maximum Bitwise-OR Subsets</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given an integer array <code>nums</code>, find the maximum possible bitwise <strong>OR</strong> of a subset of <code>nums</code> and return the number of different non-empty subsets with the maximum bitwise OR.</p>

<p>An array <code>a</code> is a subset of an array <code>b</code> if <code>a</code> can be obtained from <code>b</code> by deleting some (possibly zero) elements of <code>b</code>. Two subsets are considered different if the indices of the elements chosen are different.</p>

<p>The bitwise OR of an array <code>a</code> is equal to <code>a[0] | a[1] | ... | a[a.length - 1]</code> (0-indexed).</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [3,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The maximum possible bitwise OR is 3. There are 2 subsets with this OR:
- [3]
- [3,1]
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,2]
<strong>Output:</strong> 7
<strong>Explanation:</strong> All non-empty subsets have OR = 2. Total subsets = 2<sup>3</sup> - 1 = 7.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,1,5]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The maximum OR is 7. There are 6 subsets with OR = 7:
- [3,5], [3,1,5], [3,2,5], [3,2,1,5], [2,5], [2,1,5]
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 16</code></li>
  <li><code>1 &le; nums[i] &le; 10<sup>5</sup></code></li>
</ul>
</div>
