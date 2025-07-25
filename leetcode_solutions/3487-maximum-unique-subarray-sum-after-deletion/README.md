<h2><a href="https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/">3487. Maximum Unique Subarray Sum After Deletion</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given an integer array <code>nums</code>.</p>

<p>You are allowed to delete any number of elements from <code>nums</code> (but not all of them). After performing the deletions, select a subarray of the remaining elements such that:</p>
<ul>
  <li>All elements in the subarray are <strong>unique</strong>.</li>
  <li>The <strong>sum</strong> of the elements in the subarray is maximized.</li>
</ul>

<p>Return the <strong>maximum sum</strong> of such a subarray.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,4,5]
<strong>Output:</strong> 15
<strong>Explanation:</strong> Select the entire array without deleting any elements. All elements are unique and the sum is 15.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,0,1,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Delete all but one occurrence of 1. Select [1]. Only 1 is unique.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,-1,-2,1,0,-1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Delete -1 and -2 to make [1,2,1,0,-1]. Then select subarray [2,1] or [1,0,2] after appropriate deletions. Max sum is 3.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; nums.length &le; 100</code></li>
  <li><code>-100 &le; nums[i] &le; 100</code></li>
</ul>
</div>
