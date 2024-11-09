<h2><a href="https://leetcode.com/problems/minimum-array-end/">3133. Minimum Array End</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given two integers <code>n</code> and <code>x</code>. You have to construct an array of positive integers <code>nums</code> of size <code>n</code> where for every <code>0 &lt;= i &lt; n - 1</code>, <code>nums[i + 1]</code> is greater than <code>nums[i]</code>, and the result of the bitwise AND operation between all elements of <code>nums</code> is <code>x</code>.</p>
<p>Return the minimum possible value of <code>nums[n - 1]</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3, x = 4
<strong>Output:</strong> 6
<strong>Explanation:</strong>
nums can be [4,5,6] and its last element is 6.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 2, x = 7
<strong>Output:</strong> 15
<strong>Explanation:</strong>
nums can be [7,15] and its last element is 15.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
<li><code>1 &lt;= n, x &lt;= 10<sup>8</sup></code></li>
</ul>
</div>
