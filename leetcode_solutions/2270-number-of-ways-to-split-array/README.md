### <h2><a href="https://leetcode.com/problems/number-of-ways-to-split-array/">2270. Number of Ways to Split Array</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed integer array <code>nums</code> of length <code>n</code>.</p>  

<p><code>nums</code> contains a valid split at index <code>i</code> if the following are true:</p>  
<ul>  
<li>The sum of the first <code>i + 1</code> elements is greater than or equal to the sum of the last <code>n - i - 1</code> elements.</li>  
<li>There is at least one element to the right of <code>i</code>. That is, <code>0 <= i < n - 1</code>.</li>  
</ul>  

<p>Return the number of valid splits in <code>nums</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> nums = [10,4,-8,7]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
There are three ways of splitting <code>nums</code> into two non-empty parts:  
- Split <code>nums</code> at index <code>0</code>. Then, the first part is <code>[10]</code>, and its sum is <code>10</code>. The second part is <code>[4,-8,7]</code>, and its sum is <code>3</code>. Since <code>10 >= 3</code>, <code>i = 0</code> is a valid split.  
- Split <code>nums</code> at index <code>1</code>. Then, the first part is <code>[10,4]</code>, and its sum is <code>14</code>. The second part is <code>[-8,7]</code>, and its sum is <code>-1</code>. Since <code>14 >= -1</code>, <code>i = 1</code> is a valid split.  
- Split <code>nums</code> at index <code>2</code>. Then, the first part is <code>[10,4,-8]</code>, and its sum is <code>6</code>. The second part is <code>[7]</code>, and its sum is <code>7</code>. Since <code>6 < 7</code>, <code>i = 2</code> is not a valid split.  
Thus, the number of valid splits in <code>nums</code> is <code>2</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> nums = [2,3,1,0]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
There are two valid splits in <code>nums</code>:  
- Split <code>nums</code> at index <code>1</code>. Then, the first part is <code>[2,3]</code>, and its sum is <code>5</code>. The second part is <code>[1,0]</code>, and its sum is <code>1</code>. Since <code>5 >= 1</code>, <code>i = 1</code> is a valid split.  
- Split <code>nums</code> at index <code>2</code>. Then, the first part is <code>[2,3,1]</code>, and its sum is <code>6</code>. The second part is <code>[0]</code>, and its sum is <code>0</code>. Since <code>6 >= 0</code>, <code>i = 2</code> is a valid split.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>2 <= nums.length <= 10<sup>5</sup></code></li>  
<li><code>-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup></code></li>  
</ul>  
</div>  
