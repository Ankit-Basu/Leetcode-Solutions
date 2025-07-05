### <h2><a href="https://leetcode.com/problems/find-lucky-integer-in-an-array/">1394. Find Lucky Integer in an Array</a></h2>
<h3>Easy</h3>
<hr>

<p>Given an array of integers <code>arr</code>, a lucky integer is an integer that has a frequency in the array equal to its value.</p>

<p>Return the <strong>largest</strong> lucky integer in the array. If there is no lucky integer, return <code>-1</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> arr = [2,2,3,4]
<strong>Output:</strong> 2

<strong>Explanation:</strong>
The only lucky integer is 2 since it appears exactly 2 times.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> arr = [1,2,2,3,3,3]
<strong>Output:</strong> 3

<strong>Explanation:</strong>
Lucky integers are 1, 2, and 3. Among them, 3 is the largest.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> arr = [2,2,2,3,3]
<strong>Output:</strong> -1

<strong>Explanation:</strong>
No integer in the array has frequency equal to its value.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= arr.length <= 500</code></li>
  <li><code>1 <= arr[i] <= 500</code></li>
</ul>
