### <h2><a href="https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/">2294. Partition Array Such That Maximum Difference Is K</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> and an integer <code>k</code>. You may partition <code>nums</code> into one or more subsequences such that each element in <code>nums</code> appears in exactly one of the subsequences.</p>

<p>Return the <strong>minimum number of subsequences</strong> needed such that the difference between the maximum and minimum values in each subsequence is at most <code>k</code>.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> nums = [3,6,1,2,5], k = 2  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
We can partition nums into the subsequences [3,1,2] and [6,5].  
The differences are 2 and 1, respectively. Hence, the result is 2.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> nums = [1,2,3], k = 1  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
Valid partitions include [1,2], [3] or [1], [2,3].
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> nums = [2,2,4,5], k = 0  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
Partition into [2,2], [4], and [5] since all values in a group must be the same.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums.length <= 10⁵</code></li>
  <li><code>0 <= nums[i] <= 10⁵</code></li>
  <li><code>0 <= k <= 10⁵</code></li>
</ul>
</div>
