### <h2><a href="https://leetcode.com/problems/minimum-index-of-a-valid-split/">2780. Minimum Index of a Valid Split</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>An element <code>x</code> of an integer array <code>arr</code> of length <code>m</code> is <strong>dominant</strong> if more than half the elements of <code>arr</code> have a value of <code>x</code>.</p>  

<p>You are given a <code>0</code>-indexed integer array <code>nums</code> of length <code>n</code> with exactly one dominant element.</p>  

<p>You can split <code>nums</code> at an index <code>i</code> into two arrays <code>nums[0, ..., i]</code> and <code>nums[i + 1, ..., n - 1]</code>, but the split is only valid if:</p>  
<ul>  
<li><code>0 ≤ i < n - 1</code></li>  
<li><code>nums[0, ..., i]</code> and <code>nums[i + 1, ..., n - 1]</code> have the same dominant element.</li>  
</ul>  

<p>Here, <code>nums[i, ..., j]</code> denotes the subarray of <code>nums</code> starting at index <code>i</code> and ending at index <code>j</code>, both ends being inclusive. Particularly, if <code>j < i</code>, then <code>nums[i, ..., j]</code> denotes an empty subarray.</p>  

<p>Return the <strong>minimum</strong> index of a valid split. If no valid split exists, return <code>-1</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,2,2,2]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
We can split the array at index <code>2</code> to obtain arrays <code>[1,2,2]</code> and <code>[2]</code>.  
In array <code>[1,2,2]</code>, element <code>2</code> is dominant since it occurs twice, and <code>2 * 2 > 3</code>.  
In array <code>[2]</code>, element <code>2</code> is dominant since it occurs once, and <code>1 * 2 > 1</code>.  
Both subarrays have the same dominant element, so this is a valid split.  
It can be shown that index <code>2</code> is the minimum index of a valid split.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,1,3,1,1,1,7,1,2,1]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
We can split the array at index <code>4</code> to obtain arrays <code>[2,1,3,1,1]</code> and <code>[1,7,1,2,1]</code>.  
In array <code>[2,1,3,1,1]</code>, element <code>1</code> is dominant since it occurs three times, and <code>3 * 2 > 5</code>.  
In array <code>[1,7,1,2,1]</code>, element <code>1</code> is dominant since it occurs three times, and <code>3 * 2 > 5</code>.  
Both subarrays have the same dominant element, so this is a valid split.  
It can be shown that index <code>4</code> is the minimum index of a valid split.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [3,3,3,3,7,2,2]  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
It can be shown that there is no valid split.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ nums.length ≤ 10⁵</code></li>  
<li><code>1 ≤ nums[i] ≤ 10⁹</code></li>  
<li><code>nums</code> has exactly one dominant element.</li>  
</ul>  
</div>  
