### <h2><a href="https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/">2948. Make Lexicographically Smallest Array by Swapping Elements</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed array of positive integers <code>nums</code> and a positive integer <code>limit</code>.</p>  

<p>In one operation, you can choose any two indices <code>i</code> and <code>j</code> and swap <code>nums[i]</code> and <code>nums[j]</code> if <code>|nums[i] - nums[j]| <= limit</code>.</p>  

<p>Return the lexicographically smallest array that can be obtained by performing the operation any number of times.</p>  

<p>An array <code>a</code> is lexicographically smaller than an array <code>b</code> if in the first position where <code>a</code> and <code>b</code> differ, array <code>a</code> has an element that is less than the corresponding element in <code>b</code>. For example, the array <code>[2,10,3]</code> is lexicographically smaller than the array <code>[10,2,3]</code> because they differ at index <code>0</code> and <code>2 < 10</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,5,3,9,8], limit = 2  
<strong>Output:</strong> [1,3,5,8,9]  
<strong>Explanation:</strong>  
Apply the operation 2 times:  
- Swap <code>nums[1]</code> with <code>nums[2]</code>. The array becomes <code>[1,3,5,9,8]</code>.  
- Swap <code>nums[3]</code> with <code>nums[4]</code>. The array becomes <code>[1,3,5,8,9]</code>.  
We cannot obtain a lexicographically smaller array by applying any more operations.  
Note that it may be possible to get the same result by doing different operations.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,7,6,18,2,1], limit = 3  
<strong>Output:</strong> [1,6,7,18,1,2]  
<strong>Explanation:</strong>  
Apply the operation 3 times:  
- Swap <code>nums[1]</code> with <code>nums[2]</code>. The array becomes <code>[1,6,7,18,2,1]</code>.  
- Swap <code>nums[0]</code> with <code>nums[4]</code>. The array becomes <code>[2,6,7,18,1,1]</code>.  
- Swap <code>nums[0]</code> with <code>nums[5]</code>. The array becomes <code>[1,6,7,18,1,2]</code>.  
We cannot obtain a lexicographically smaller array by applying any more operations.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [1,7,28,19,10], limit = 3  
<strong>Output:</strong> [1,7,28,19,10]  
<strong>Explanation:</strong>  
<code>[1,7,28,19,10]</code> is the lexicographically smallest array we can obtain because we cannot apply the operation on any two indices.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 10<sup>5</sup></code></li>  
<li><code>1 <= nums[i] <= 10<sup>9</sup></code></li>  
<li><code>1 <= limit <= 10<sup>9</sup></code></li>  
</ul>  
</div>  
