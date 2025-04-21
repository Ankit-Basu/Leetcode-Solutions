### <h2><a href="https://leetcode.com/problems/count-the-hidden-sequences/">2145. Count the Hidden Sequences</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed array of <code>n</code> integers <code>differences</code>, which describes the differences between each pair of consecutive integers of a hidden sequence of length <code>n + 1</code>. More formally, call the hidden sequence <code>hidden</code>, then we have:</p>

<pre>differences[i] = hidden[i + 1] - hidden[i]</pre>

<p>You are also given two integers <code>lower</code> and <code>upper</code> that describe the inclusive range <code>[lower, upper]</code> the hidden sequence must fall within.</p>

<p>Return the number of possible hidden sequences that satisfy the <code>differences</code> and fall entirely within the given range. If there are no such sequences, return <code>0</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> differences = [1,-3,4], lower = 1, upper = 6
<strong>Output:</strong> 2
<strong>Explanation:</strong> Possible hidden sequences are:
- [3, 4, 1, 5]
- [4, 5, 2, 6]
Both sequences lie in the range [1, 6] and satisfy the difference array.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> differences = [3,-4,5,1,-2], lower = -4, upper = 5
<strong>Output:</strong> 4
<strong>Explanation:</strong> Valid sequences include:
- [-3, 0, -4, 1, 2, 0]
- [-2, 1, -3, 2, 3, 1]
- [-1, 2, -2, 3, 4, 2]
- [0, 3, -1, 4, 5, 3]
</pre>

<p><strong>Example 3:</strong></p>
<pre>
<strong>Input:</strong> differences = [4,-7,2], lower = 3, upper = 6
<strong>Output:</strong> 0
<strong>Explanation:</strong> No sequence fits within the given range [3, 6].
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == differences.length</code></li>
  <li><code>1 <= n <= 10<sup>5</sup></code></li>
  <li><code>-10<sup>5</sup> <= differences[i] <= 10<sup>5</sup></code></li>
  <li><code>-10<sup>5</sup> <= lower <= upper <= 10<sup>5</sup></code></li>
</ul>
</div>
